/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   game.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsabater <dsabater@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 12:44:35 by dsabater          #+#    #+#             */
/*   Updated: 2023/12/04 08:50:25 by dsabater         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/so_long.h"

void	init_game(t_game *g, char *fpath)
{
	init_sprites(g);
	map_load(g, fpath);
	check_map(g);
	set_img(g);
}
int	endgame(t_game *g)
{
	mlx_destroy_window(g->mlx, g->win);
	exit(0);
}
/* int	clear_game(t_game *g)
{
	g->walk_cnt++;
	ft_printf("%d "steps."\n", g->walk_count);
	exit(0);
}
 */
