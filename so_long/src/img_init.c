/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   img_init.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsabater <dsabater@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 09:58:19 by dsabater          #+#    #+#             */
/*   Updated: 2023/12/05 13:46:30 by dsabater         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/so_long.h"

int	coll_count(char *str)
{
	int	i;
	int	coll;

	i = 0;
	coll = 0;
	while(str[i])
	{
		if (str[i] == 'C')
			coll++;
		i++;
	}
	return (coll);
}
void	init_sprites(t_game *g)
{
	g->mlx = mlx_init();
	g->win = mlx_new_window(g->mlx, g->width * 42, g->height * 42, "so_long");
	g->img.wall = mlx_xpm_file_to_image(g->mlx, WALL, \
		&(g->img.width), &(g->img.height));
	ft_printf("%s\n", g->img.wall);
 	g->img.floor = mlx_xpm_file_to_image(g->mlx, FLOOR, \
		&(g->img.width), &(g->img.height));
	g->img.coll = mlx_xpm_file_to_image(g->mlx, COLL, \
		&(g->img.width), &(g->img.height));
	g->img.stair = mlx_xpm_file_to_image(g->mlx, STAIR, \
		&(g->img.width), &(g->img.height));
	g->img.player = mlx_xpm_file_to_image(g->mlx, PLAYER, \
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
		width = -1;
		while (++width < g->width)
		{
			if (g->map[height * g->width + width] == '1')
				mlx_put_image_to_window(g->mlx, g->win, \
					g->img.wall, width * 42, height * 42);
			else if (g->map[height * g->width + width] == 'C')
				mlx_put_image_to_window(g->mlx, g->win, \
					g->img.coll, width * 42, height * 42);
			else if (g->map[height * g->width + width] == 'P')
				mlx_put_image_to_window(g->mlx, g->win, \
					g->img.player, width * 42, height * 42);
			else if (g->map[height * g->width + width] == 'E')
				mlx_put_image_to_window(g->mlx, g->win, \
					g->img.stair, width * 42, height * 42);
			else
				mlx_put_image_to_window(g->mlx, g->win, \
					g->img.floor, width * 42, height * 42);
		}
	}
}
/* void	put_img(t_game *g, int w, int h)
{
	if (g->map[h * g->width + w] == '1')
		mlx_put_image_to_window(g->mlx, g->win, g->img.wall, w * 42, h * 42);
	else if (g->map[h * g->width + w] == 'C')
		mlx_put_image_to_window(g->mlx, g->win, g->img.coll, w * 42, h * 42);
	else if (g->map[h * g->width + w] == 'P')
		mlx_put_image_to_window(g->mlx, g->win, g->img.player, w * 42, h * 42);
	else if (g->map[h * g->width + w] == 'E')
		mlx_put_image_to_window(g->mlx, g->win, g->img.stair, w * 42, h * 42);
	else
		mlx_put_image_to_window(g->mlx, g->win, g->img.floor, w * 42, h * 42);
}
void	set_img(t_game *g)
{
	int		h;
	int		w;

	h = 0;
	while (h < g->height)
	{
		w = 0;
		while (w < g->width)
		{
			put_img(g, w, h);
			w++;
		}
		h++;
	}
}*/
