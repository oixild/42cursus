/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsabater <dsabater@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 15:04:33 by dsabater          #+#    #+#             */
/*   Updated: 2023/09/19 10:09:55 by dsabater         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include "ft_printf.h"

// NODE STRUCTURE
typedef struct s_node
{
	struct s_node	*next;
	int				data;
	int				final_index;
}	t_node;

typedef struct s_stack
{
	struct s_node	*node;
	struct s_node	*top;
	int				size;
}	t_stack;

// PUSHSWAP
int	ft_is_num(char c);

#endif
