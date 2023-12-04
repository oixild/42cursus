/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   keyhooks.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsabater <dsabater@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 09:51:29 by dsabater          #+#    #+#             */
/*   Updated: 2023/12/04 09:30:17 by dsabater         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/so_long.h"

int	keyhooks(t_game *g, int kh)
{
	if (kh == ESC)
		endgame(g);
	else if (kh == W)
		move_w(g);
	else if (kh == A)
		move_a(g);
	else if (kh == S)
		move_s(g);
	else if (kh == D)
		move_d(g);
	return (0);
}
