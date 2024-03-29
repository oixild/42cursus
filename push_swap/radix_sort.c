/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsabater <dsabater@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 15:06:21 by dsabater          #+#    #+#             */
/*   Updated: 2023/10/18 13:46:20 by dsabater         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	get_max_bits(t_stack_node **stack)
{
	t_stack_node	*current;
	int				max_index;
	int				max_bits;

	current = *stack;
	max_index = current->index;
	max_bits = 0;
	while (current)
	{
		if (current->index > max_index)
			max_index = current->index;
		current = current->next;
	}
	while ((max_index >> max_bits) != 0)
		max_bits++;
	return (max_bits);
}

void	radix_sort(t_stack_node **stack_a, t_stack_node **stack_b)
{
	t_stack_node	*current_a;
	int				i;
	int				j;
	int				size;
	int				max_bits;

	i = 0;
	current_a = *stack_a;
	size = ft_stack_size(current_a);
	max_bits = get_max_bits(stack_a);
	while (i < max_bits)
	{
		j = 0;
		while (j++ < size)
		{
			current_a = *stack_a;
			if (((current_a->index >> i) & 1) == 1)
				ra(stack_a);
			else
				pb(stack_a, stack_b);
		}
		while (ft_stack_size(*stack_b) != 0)
			pa(stack_a, stack_b);
		i++;
	}
}
