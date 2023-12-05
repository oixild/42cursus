/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   game.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsabater <dsabater@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 12:44:35 by dsabater          #+#    #+#             */
/*   Updated: 2023/12/05 13:13:15 by dsabater         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/so_long.h"

void	init_game(t_game *g, char *fpath)
{
	map_load(g, fpath);
	check_map(g);
	init_sprites(g);
	set_img(g);
}
int	endgame(t_game *g)
{
	mlx_destroy_window(g->mlx, g->win);
	exit(0);
}
