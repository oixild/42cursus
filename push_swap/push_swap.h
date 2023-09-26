/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsabater <dsabater@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 15:04:33 by dsabater          #+#    #+#             */
/*   Updated: 2023/09/26 11:36:57 by dsabater         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include "libft.h"

// NODE STRUCTURE STACK
typedef struct s_list
{
	int				content;
	int				index;
	struct s_list	*next;
}				t_list;

// Structure containing stack_a and stack_b
typedef struct
{
	t_list **stack_a;
	t_list **stack_b;
} t_stack;

// PUSHSWAP
void	args_error_control(int argc, char **argv);
int		ft_is_num(char c);
char	*ft_free(char **str);
void	index_stack(t_list **stack);
int		is_sorted(t_list **stack);
void	free_stack(t_list **stack);
void	quickSortWrapper(t_list **stack_a, t_list **stack_b);
void	radix_sort(t_list **stack_a, t_list **stack_b);

#endif
