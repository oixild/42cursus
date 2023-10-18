/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsabater <dsabater@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 15:04:33 by dsabater          #+#    #+#             */
/*   Updated: 2023/10/18 13:18:32 by dsabater         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include "libft/libft.h"

// NODE STRUCTURE STACK
typedef struct s_stack_node
{
	int					content;
	int					index;
	struct s_stack_node	*next;
}				t_stack_node;

// Structure containing stack_a and stack_b
typedef struct s_stack
{
	t_stack_node	**stack_a;
	t_stack_node	**stack_b;
}				t_stack;

// PUSHSWAP
void			args_error_control(int argc, char **argv);
int				ft_is_num(char c);
char			*ft_free(char **str);
void			index_stack(t_stack_node **stack);
int				is_sorted(t_stack_node **stack);
void			free_stack(t_stack_node **stack_a, t_stack_node **stack_b);
void			simple_sort(t_stack_node **stack_a, t_stack_node **stack_b);
void			radix_sort(t_stack_node **stack_a, t_stack_node **stack_b);
void			ft_error(char *msg);
int				get_distance(t_stack_node **stack, int index);
void			make_top(t_stack_node **stack, int distance);
void			shortelselines(t_stack_node current, int min, \
				t_stack_node **stack_a);

// USE OF NODES
int				ft_stack_size(t_stack_node *stack);
void			ft_stack_add_back(t_stack_node **stack, t_stack_node *new);
t_stack_node	*create_stack_node(int value);
void			add_stack_node(t_stack_node **stack, t_stack_node *new_node);
/*void	ft_stack_add_front(t_stack_node ***stack, t_stack_node *new_node);*/
t_stack_node	*ft_stack_last(t_stack_node *stack);

// MOVEMENTS

int				sa(t_stack_node **stack_a);
int				sb(t_stack_node **stack_b);
int				ss(t_stack_node **stack_a, t_stack_node **stack_b);
int				push(t_stack_node **stack_to, t_stack_node **stack_from);
int				pa(t_stack_node **stack_a, t_stack_node **stack_b);
int				pb(t_stack_node **stack_a, t_stack_node **stack_b);
int				rotate(t_stack_node **stack);
int				ra(t_stack_node **stack_a);
int				rb(t_stack_node **stack_b);
int				rr(t_stack_node **stack_a, t_stack_node **stack_b);
int				reverserotate(t_stack_node **stack);
int				rra(t_stack_node **stack_a);
int				rrb(t_stack_node **stack_b);
int				rrr(t_stack_node **stack_a, t_stack_node **stack_b);

#endif
