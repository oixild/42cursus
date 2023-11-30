/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   game.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsabater <dsabater@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 12:44:35 by dsabater          #+#    #+#             */
/*   Updated: 2023/11/30 12:13:20 by dsabater         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/so_long.h"

void	init_game(t_game *g, char *fpath)
{
	map_load(g, fpath);
	init_sprites(g);
	// render map
	// hooks
	mlx_loop(g->mlx);
}
void	endgame(t_game *g)
{

}
