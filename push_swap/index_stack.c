/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index_stack.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsabater <dsabater@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 15:06:05 by dsabater          #+#    #+#             */
/*   Updated: 2023/10/11 12:43:44 by dsabater         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static t_stack_node	*get_next_min(t_stack_node **stack)
{
	t_stack_node	*current;
	t_stack_node	*min;
	int				has_min;

	min = NULL;
	has_min = 0;
	current = *stack;
	if (current)
	{
		while (current)
		{
			if ((current->index == -1) && (!has_min || \
				current->content < min->content))
			{
				min = current;
				has_min = 1;
			}
			current = current->next;
		}
	}
	return (min);
}

void	index_stack(t_stack_node **stack)
{
	t_stack_node	*current;
	int				index;

	index = 0;
	current = get_next_min(stack);
	while (current)
	{
		current->index = index++;
		current = get_next_min(stack);
	}
}
