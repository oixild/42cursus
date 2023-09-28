/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   quick_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsabater <dsabater@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 15:06:03 by dsabater          #+#    #+#             */
/*   Updated: 2023/09/28 10:11:02 by dsabater         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// Función para intercambiar dos nodos en una lista enlazada
void swapNodes(t_stack_node *a, t_stack_node *b)
{
	int temp;

	temp = a->content;
	a->content = b->content;
	b->content = temp;
}

// Función para seleccionar el pivote y particionar la lista
t_stack_node *partition(t_stack_node *low, t_stack_node *high)
{
	int pivot;

	pivot = high->content;
	t_stack_node *i = low;
	t_stack_node *j = low;

	while (j != high)
	{
		if (j->content <= pivot)
		{
			if (i == NULL)
				i = low;
			else i = i->next;
			swapNodes(i, j);
		}
		j = j->next;
	}
	if (i == NULL)
		i = low;
	else i = i->next;
	swapNodes(i, high);
	return (i);
}

// Función principal de QuickSort para una lista enlazada
void quickSortList(t_stack *stacks, t_stack_node *low, t_stack_node *high)
{
	t_stack_node *pivot;
	t_stack_node *current;
	t_stack_node *element_to_move;

	if (high != NULL && low != high && low != high->next)
	{
		pivot = partition(low, high);
		current = low;
		while (current != pivot)
		{
			if (current->content > pivot->content)
			{
				// Mueve el elemento a stack_b
				element_to_move = current;
				current = current->next; // Avanza el puntero antes de mover el elemento
				ft_stack_add_front(stacks->stack_b, element_to_move);
			}
			else current = current->next;
		}
		quickSortList(stacks, low, pivot);
		quickSortList(stacks, pivot->next, high);
		while (*stacks->stack_b)
		{
			t_stack_node *element_to_move = *stacks->stack_b;
			ft_stack_add_front(stacks->stack_a, element_to_move);
			*stacks->stack_b = (*stacks->stack_b)->next;
		}
	}
}

// Función para iniciar QuickSort en la lista
void quickSortWrapper(t_stack_node **stack_a, t_stack_node **stack_b)
{
	t_stack stacks;
	t_stack_node  *tail;

    stacks.stack_a = stack_a;
    stacks.stack_b = stack_b;
	tail = *stack_a;
	while (tail != NULL && tail->next != NULL)
		tail = tail->next;
	quickSortList(&stacks, *stack_a, tail);
}
