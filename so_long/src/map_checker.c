/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_checker.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsabater <dsabater@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 07:05:44 by dsabater          #+#    #+#             */
/*   Updated: 2023/12/04 09:48:24 by dsabater         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/so_long.h"

void	map_check_wall(t_game *g)
{
	int	i;

	i = 0;
	while (i < ft_strlen(g->map))
	{
		if (i < g->width)
		{
			if (g->map[i] != '1')
				print_error("Map must be closed/surrounded by walls");
		}
		else if (i % g->width == 0 || i % g->width == g->width - 1)
		{
			if (g->map[i] != '1')
				print_error("Map must be closed/surrounded by walls");
		}
		else if (i > ft_strlen(g->map) - g->width)
		{
			if (g->map[i] != '1')
				print_error("Map must be closed/surrounded by walls");
		}
		i++;
	}
}

void	map_check_params(t_game *g)
{
	int	i;
	int	num_e;
	int	num_p;

	i = 0;
	num_e = 0;
	num_p = 0;
	g->total_coll = 0;
	g->coll_count = 0;
	while (i++ < ft_strlen(g->map))
	{
		if (g->map[i] == 'E')
			num_e++;
		else if (g->map[i] == 'P')
			num_p++;
		else if (g->map[i] == 'C')
			g->total_coll++;
	}
	if (num_e == 0)
		print_error("Map must have at least one exit");
	if (g->total_coll == 0)
		print_error("Map must have at least one collectible");
	if (num_p != 1)
		print_error("Map must have one starting position");
}

void	check_map(t_game *g)
{
	if (g->height * g->width != ft_strlen(g->map))
		print_error("Map must be rectangular");
	map_check_wall(g);
	map_check_params(g);
}
