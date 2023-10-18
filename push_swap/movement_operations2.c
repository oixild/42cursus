/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   movement_operations2.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsabater <dsabater@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 12:22:18 by dsabater          #+#    #+#             */
/*   Updated: 2023/10/18 12:25:11 by dsabater         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	pa(t_stack_node **stack_a, t_stack_node **stack_b)
{
	if (push(stack_a, stack_b) == -1)
		return (-1);
	ft_putendl_fd("pa", 1);
	return (0);
}

int	pb(t_stack_node **stack_a, t_stack_node **stack_b)
{
	if (push(stack_b, stack_a) == -1)
		return (-1);
	ft_putendl_fd("pb", 1);
	return (0);
}

int	rotate(t_stack_node **stack)
{
	t_stack_node	*current;
	t_stack_node	*tail;

	if (ft_stack_size(*stack) < 2)
		return (-1);
	current = *stack;
	tail = ft_stack_last(current);
	*stack = current->next;
	current->next = NULL;
	tail->next = current;
	return (0);
}

int	ra(t_stack_node **stack_a)
{
	if (rotate(stack_a) == -1)
		return (-1);
	ft_putendl_fd("ra", 1);
	return (0);
}

int	rb(t_stack_node **stack_b)
{
	if (rotate(stack_b) == -1)
		return (-1);
	ft_putendl_fd("rb", 1);
	return (0);
}
