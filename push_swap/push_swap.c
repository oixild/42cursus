/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsabater <dsabater@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 15:04:10 by dsabater          #+#    #+#             */
/*   Updated: 2023/09/26 12:35:29 by dsabater         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	initStack(t_stack_node **stack, int argc, char **argv)
{
	t_stack_node	*new;
	char	**args;
	int		i;

	i = 0;
	if (argc == 2)
		args = ft_split(argv[1], ' ');
	else
	{
		i = 1;
		args = argv;
	}
	while (args[i])
	{
		new = create_stack_node(ft_atoi(args[i]));
		ft_stack_add_back(stack, new);
		i++;
	}
	index_stack(stack);
	if (argc == 2)
		ft_free(args);
}

static void	sort_stack(t_stack_node **stack_a, t_stack_node **stack_b)
{
	if (ft_stack_size(*stack_a) <= 5)
		quickSortWrapper(stack_a, stack_b);
	else radix_sort(stack_a, stack_b);
}

int	main(int argc, char **argv)
{
	t_stack	stacks;

	args_error_control(argc, argv);
	stacks.stack_a = (t_stack_node **)malloc(sizeof(t_stack_node *));
	stacks.stack_b = (t_stack_node **)malloc(sizeof(t_stack_node *));
	*stacks.stack_a = NULL;
	*stacks.stack_b = NULL;
	initStack(stacks.stack_a, argc, argv);
		if (is_sorted(stacks.stack_a))
	{
		free_stack(stacks.stack_a);
		free_stack(stacks.stack_b);
		return (0);
	}
	sort_stack(stacks.stack_a, stacks.stack_b);
	free_stack(stacks.stack_a);
	free_stack(stacks.stack_b);
	return (0);
}
