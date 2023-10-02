/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsabater <dsabater@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 15:06:08 by dsabater          #+#    #+#             */
/*   Updated: 2023/10/02 15:31:04 by dsabater         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	*ft_free(char **str)
{
	free(*str);
	*str = NULL;
	return (NULL);
}
int	is_sorted(t_stack_node **stack)
{
	t_stack_node	*lst;

	lst = *stack;
	while (lst && lst->next)
	{
		if (lst->content > lst->next->content)
			return (0);
		lst = lst->next;
	}
	return (1);
}

int get_distance(t_stack_node **stack, int index)
{
	t_stack_node	*current;
	int				distance;

	current = *stack;
	distance = 0;
	while (current)
	{
		if (current->index == index)
			break;
		distance++;
		current = current->next;
	}

	return distance;
}

void make_top(t_stack_node **stack, int distance)
{
	int				tmp;
	t_stack_node	*current;

	if (distance == 0)
		return;
	current = *stack;
	tmp = ft_stack_size(*stack) - distance;
	if (distance <= (ft_stack_size(*stack) / 2))
	{
		while (distance-- > 0)
			ra(stack);
	}
	else
	{
		while (tmp-- > 0)
			rra(stack);
	}
}
void	free_stack(t_stack_node **stack_a, t_stack_node **stack_b)
{
	t_stack_node	*current;
	t_stack_node	*next;

	current = *stack_a;
	while (current)
	{
		next = current->next;
		free(current);
		current = next;
	}
	*stack_a = NULL;
	current = *stack_b;
	while (current)
	{
		next = current->next;
		free(current);
		current = next;
	}
	*stack_b = NULL;
}
