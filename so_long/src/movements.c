/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   movements.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsabater <dsabater@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 10:53:04 by dsabater          #+#    #+#             */
/*   Updated: 2023/12/12 10:56:07 by dsabater         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/so_long.h"

void	move_w(t_game *g)
{
	int	i;

	i = 0;
	while (i++ < ft_strlen(g->map))
	{
		if (g->map[i] == 'P')
			break ;
	}
	if (g->map[i - g->width] == 'C')
		g->coll_count++;
	if (g->map[i - g->width] == 'E' && g->total_coll == g->coll_count)
		endgame(g);
	else if (g->map[i - g->width] != '1' && g->map[i - g->width] != 'E')
	{
		g->map[i] = '0';
		g->map[i - g->width] = 'P';
		g->walk_count++;
		ft_printf("%d\n", g->walk_count);
		set_img(g);
	}
}

void	move_a(t_game *g)
{
	int	i;

	i = 0;
	while (i++ < ft_strlen(g->map))
	{
		if (g->map[i] == 'P')
			break ;
	}
	if (g->map[i - 1] == 'C')
		g->coll_count++;
	if (g->map[i - 1] == 'E' && g->total_coll == g->coll_count)
		endgame(g);
	else if (g->map[i - 1] != '1' && g->map[i - 1] != 'E')
	{
		g->map[i] = '0';
		g->map[i - 1] = 'P';
		g->walk_count++;
		ft_printf("%d\n", g->walk_count);
		set_img(g);
	}
}

void	move_s(t_game *g)
{
	int	i;

	i = 0;
	while (i++ < ft_strlen(g->map))
	{
		if (g->map[i] == 'P')
			break ;
	}
	if (g->map[i + g->width] == 'C')
		g->coll_count++;
	if (g->map[i + g->width] == 'E' && g->total_coll == g->coll_count)
		endgame(g);
	else if (g->map[i + g->width] != '1' && g->map[i + g->width] != 'E')
	{
		g->map[i] = '0';
		g->map[i + g->width] = 'P';
		g->walk_count++;
		ft_printf("%d\n", g->walk_count);
		set_img(g);
	}
}

void	move_d(t_game *g)
{
	int	i;

	i = 0;
	while (i++ < ft_strlen(g->map))
	{
		if (g->map[i] == 'P')
			break ;
	}
	if (g->map[i + 1] == 'C')
		g->coll_count++;
	if (g->map[i + 1] == 'E' && g->total_coll == g->coll_count)
		endgame(g);
	else if (g->map[i + 1] != '1' && g->map[i + 1] != 'E')
	{
		g->map[i] = '0';
		g->map[i + 1] = 'P';
		g->walk_count++;
		ft_printf("%d\n", g->walk_count);
		set_img(g);
	}
}
