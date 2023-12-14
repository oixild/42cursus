/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flood_fill.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsabater <dsabater@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 09:48:54 by dsabater          #+#    #+#             */
/*   Updated: 2023/12/14 10:49:47 by dsabater         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/so_long.h"

void	search_c_e(char *mapcpy, int width)
{
	int i;

	i = 0;
	while (i < ft_strlen(mapcpy))
	{
		if (mapcpy[i] == 'E')
			break ;
		i++;
	}
	if (mapcpy[i + 1] == '*' || mapcpy[i - 1] == '*' || mapcpy[i + width] == '*' || mapcpy[i - width] == '*')
			ft_printf("H::::::%s\n", mapcpy);
	else
		print_error("Error\nCannot reach the exit or any rat!");
}

void	map_flood_fill(char *mapcpy, int width, int i, int *find)
{
	if (mapcpy[i] == '1' || mapcpy[i] == '*')
		return ;
 	if (mapcpy[i] == 'E')
		*find = *find - 1;
	if (mapcpy[i] != 'E' && mapcpy[i] != 'P')
		mapcpy[i] = '*';
	if (*find > 0)
	{
		map_flood_fill(mapcpy, width, i + 1, find);
		map_flood_fill(mapcpy, width, i - 1, find);
		map_flood_fill(mapcpy, width, i + width, find);
		map_flood_fill(mapcpy, width, i - width, find);
	}
}

int	can_reach_target(t_game *g)
{
	char	*mapcpy;
	int		find;
	int		i;

	mapcpy = ft_strdup(g->map);
	find = 1;
	i = 0;
	while (i < ft_strlen(g->map))
	{
		if (g->map[i] == 'P')
			break ;
		i++;
	}
	ft_printf("F::::::%s\n", mapcpy);
	map_flood_fill(mapcpy, g->width, i, &find);
	ft_printf("D::::::%s\n", mapcpy);
	search_c_e(mapcpy, g->width);
	ft_printf("E::::::%s\n", mapcpy);
	free(mapcpy);
	return (find);
}

void	map_flood_fill_c(char *mapcpy, int width, int i, int *find)
{
	if (mapcpy[i] == '1' || mapcpy[i] == '*' || mapcpy[i] == 'E')
		return ;
	if (mapcpy[i] == 'C')
		*find = *find - 1;
	if (mapcpy[i] != 'P')
		mapcpy[i] = '*';
	if (*find > 0)
	{
		map_flood_fill_c(mapcpy, width, i - width, find);
		map_flood_fill_c(mapcpy, width, i + 1, find);
		map_flood_fill_c(mapcpy, width, i + width, find);
		map_flood_fill_c(mapcpy, width, i - 1, find);
	}
}

int	can_reach_target_c(t_game *g)
{
	char	*mapcpy;
	int		find;
	int		i;

	mapcpy = ft_strdup(g->map);
	ft_printf("TOTALCOLL: %i\n", g->total_coll);
	find = g->total_coll;
	i = 0;
	while (i < ft_strlen(g->map))
	{
		if (g->map[i] == 'P')
			break ;
		i++;
	}
	ft_printf("Z::::::%s\n", mapcpy);
	map_flood_fill_c(mapcpy, g->width, i, &find);
	ft_printf("C::::::%s\n", mapcpy);
	free(mapcpy);
	return (find);
}

void	map_possible_arrival(t_game *g)
{
	int	e;
	int	c;

	e = can_reach_target(g);
	c = can_reach_target_c(g);
	ft_printf("42E::::%i\n42C::::%i\n", e, c);
	if ((!e && c) || (!c && e))
		print_error("Error\nCannot reach the exit or any rat!");
}
