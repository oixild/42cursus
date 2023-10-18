/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   movement_operations3.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsabater <dsabater@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 12:25:30 by dsabater          #+#    #+#             */
/*   Updated: 2023/10/18 12:36:25 by dsabater         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	rr(t_stack_node **stack_a, t_stack_node **stack_b)
{
	if ((ft_stack_size(*stack_a) < 2) || (ft_stack_size(*stack_b) < 2))
		return (-1);
	rotate(stack_a);
	rotate(stack_b);
	ft_putendl_fd("rr", 1);
	return (0);
}

int	reverserotate(t_stack_node **stack)
{
	t_stack_node	*current;
	t_stack_node	*tail;

	if (ft_stack_size(*stack) < 2)
		return (-1);
	current = *stack;
	tail = ft_stack_last(current);
	while (current)
	{
		if (current->next->next == NULL)
		{
			current->next = NULL;
			break ;
		}
		current = current->next;
	}
	tail->next = *stack;
	*stack = tail;
	return (0);
}

int	rra(t_stack_node **stack_a)
{
	if (reverserotate(stack_a) == -1)
		return (-1);
	ft_putendl_fd("rra", 1);
	return (0);
}

int	rrb(t_stack_node **stack_b)
{
	if (reverserotate(stack_b) == -1)
		return (-1);
	ft_putendl_fd("rrb", 1);
	return (0);
}

int	rrr(t_stack_node **stack_a, t_stack_node **stack_b)
{
	if ((ft_stack_size(*stack_a) < 2) || (ft_stack_size(*stack_b) < 2))
		return (-1);
	reverserotate(stack_a);
	reverserotate(stack_b);
	ft_putendl_fd("rrr", 1);
	return (0);
}
