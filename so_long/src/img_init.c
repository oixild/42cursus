/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   img_init.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsabater <dsabater@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 09:58:19 by dsabater          #+#    #+#             */
/*   Updated: 2023/11/27 11:37:05 by dsabater         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	img_init(t_game *g)
{
	g->mlx = mlx_init();
	g->win = mlx_new_window(g->mlx, g->width * 42, g->height * 42, "so_long");
	g->img.wall = mlx_xpm_file_to_image(g->mlx, "WALL", \
		&(g->img.width), &(g->img.height));
	g->img.floor = mlx_xpm_file_to_image(g->mlx, "FLOOR", \
		&(g->img.width), &(g->img.height));
	g->img.coll = mlx_xpm_file_to_image(g->mlx, "COLL", \
		&(g->img.width), &(g->img.height));
	g->img.stair = mlx_xpm_file_to_image(g->mlx, "STAIR", \
		&(g->img.width), &(g->img.height));
	g->img.player = mlx_xpm_file_to_image(g->mlx, "PLAYER", \
		&(g->img.width), &(g->img.height));
	g->coll_count = 0;
	g->total_coll = coll_count(g->map);
	g->walk_count = 0;
}
void	set_img(t_game *g)
{
	int	height;
	int	width;

	height = -1;
	while (++height < g->height)
	{

	}

}
