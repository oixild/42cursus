/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_node_stack.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsabater <dsabater@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 15:06:11 by dsabater          #+#    #+#             */
/*   Updated: 2023/10/02 11:39:18 by dsabater         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_stack_size(t_stack_node *stack)
{
	int size;

	size = 0;
	while (stack)
	{
		size++;
		stack = stack->next;
	}
	return (size);
}
void	ft_stack_add_back(t_stack_node **stack, t_stack_node *new)
{
	t_stack_node *current;

	current = *stack;
	if (!current)
	{
		*stack = new;
		return ;
	}
	while (current->next)
		current = current->next;
	current->next = new;
}
t_stack_node	*create_stack_node(int value)
{
	t_stack_node	*new_node;

	new_node = (t_stack_node *)malloc(sizeof(t_stack_node));
	if (!new_node)
		return (NULL);
	new_node->content = value;
	new_node->index = -1;
	new_node->next = NULL;
	return (new_node);
}
void	add_stack_node(t_stack_node **stack, t_stack_node *new_node)
{
	if (!stack || !new_node)
		return;
	if (!*stack)
		*stack = new_node;
	else
	{
		new_node->next = *stack;
		*stack = new_node;
	}
}
/* void ft_stack_add_front(t_stack_node ***stack, t_stack_node *new_node)
{
	if (!new_node)
		return;
	new_node->next = **stack;
	**stack = new_node;
} */
t_stack_node *ft_stack_last(t_stack_node *stack)
{
	if (!stack)
		return (NULL);
	while (stack->next)
		stack = stack->next;
	return (stack);
}
