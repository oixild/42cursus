/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsabater <dsabater@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 15:06:08 by dsabater          #+#    #+#             */
/*   Updated: 2023/09/26 11:34:01 by dsabater         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	*ft_free(char **str)
{
	free(*str);
	*str = NULL;
	return (NULL);
}
<<<<<<< HEAD
int	is_sorted(t_list **stack)
{
	t_list	*lst;

	lst = *stack;
	while (lst && lst->next)
	{
		if (lst->content > lst->next->content)
			return (0);
		lst = lst->next;
	}
	return (1);
}
=======

int	get_distance(t_list **stack, int index)
{
	t_list	*head;
	int		distance;

	distance = 0;
	head = *stack;
	while (head)
	{
		if (head->index == index)
			break ;
		distance++;
		head = head->next;
	}
	return (distance);
}

void	make_top(t_list **stack, int distance)
{
	t_list	*head;
	int		tmp;

	if (distance == 0)
		return ;
	head = *stack;
	tmp = ft_lstsize(head) - distance;
	if (distance <= (ft_lstsize(head) / 2))
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


>>>>>>> f63e37c09e9ccded152b56655f543394f3adb1c4
void	free_stack(t_list **stack)
{
	t_list	*current;
	t_list	*tmp;

<<<<<<< HEAD
	current = *stack;
	while (current)
	{
		tmp = current;
		current = current->next;
		free(tmp);
	}
	free(stack);
}
=======
	head = *stack;
	while (head)
	{
		tmp = current;
		head = current->next;
		free(tmp);
	}
	free(stack);
}
>>>>>>> f63e37c09e9ccded152b56655f543394f3adb1c4
