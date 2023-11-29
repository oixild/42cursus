/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   keyhooks.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsabater <dsabater@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 09:51:29 by dsabater          #+#    #+#             */
/*   Updated: 2023/11/29 12:47:27 by dsabater         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/so_long.h"

int	keyhooks(t_game *g, int kh)
{
	game->character.mem = 0;
	if (kh == ESC)
		endgame("", game, event_ending); // Falta por hacer
	else if (keycode == A)
		move_left(g); // Falta por hacer
	else if (keycode == D)
		move_right(g); // Falta por hacer
	else if (keycode == W)
		move_up(g); // Falta por hacer
	else if (keycode == S)
		move_down(g); // Falta por hacer
	return (0);
}
