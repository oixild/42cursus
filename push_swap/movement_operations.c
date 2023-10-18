/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   movement_operations.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsabater <dsabater@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 15:06:13 by dsabater          #+#    #+#             */
/*   Updated: 2023/10/18 12:25:58 by dsabater         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	swap(t_stack_node **stack)
{
	t_stack_node	*current;
	t_stack_node	*next;
	int				tmp_content;
	int				tmp_index;

	if (ft_stack_size(*stack) < 2)
		return (-1);
	current = *stack;
	next = current->next;
	if (!current && !next)
		ft_error("Error occurred while swapping!");
	tmp_content = current->content;
	tmp_index = current->index;
	current->content = next->content;
	current->index = next->index;
	next->content = tmp_content;
	next->index = tmp_index;
	return (0);
}

int	sa(t_stack_node **stack_a)
{
	if (swap(stack_a) == -1)
		return (-1);
	ft_putendl_fd("sa", 1);
	return (0);
}

int	sb(t_stack_node **stack_b)
{
	if (swap(stack_b) == -1)
		return (-1);
	ft_putendl_fd("sb", 1);
	return (0);
}

int	ss(t_stack_node **stack_a, t_stack_node **stack_b)
{
	if ((ft_stack_size(*stack_a) < 2) || (ft_stack_size(*stack_b) < 2))
		return (-1);
	swap(stack_a);
	swap(stack_b);
	ft_putendl_fd("ss", 1);
	return (0);
}

int	push(t_stack_node **stack_to, t_stack_node **stack_from)
{
	t_stack_node	*tmp;
	t_stack_node	*top_to;
	t_stack_node	*top_from;

	if (ft_stack_size(*stack_from) == 0)
		return (-1);
	top_to = *stack_to;
	top_from = *stack_from;
	tmp = top_from;
	top_from = top_from->next;
	*stack_from = top_from;
	if (!top_to)
	{
		top_to = tmp;
		top_to->next = NULL;
		*stack_to = top_to;
	}
	else
	{
		tmp->next = top_to;
		*stack_to = tmp;
	}
	return (0);
}
