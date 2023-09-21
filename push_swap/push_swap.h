/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsabater <dsabater@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 15:04:33 by dsabater          #+#    #+#             */
/*   Updated: 2023/09/20 13:41:54 by dsabater         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include "libft/libft.h"

// NODE STRUCTURE STACK
typedef struct s_list
{
	int				value;
	int				index;
	struct s_list	*next;
}				t_list;

// PUSHSWAP
int		ft_is_num(char c);
char	*ft_free(char **str);

#endif
