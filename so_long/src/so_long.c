/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsabater <dsabater@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 16:33:41 by dsabater          #+#    #+#             */
/*   Updated: 2023/12/04 08:20:30 by dsabater         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/so_long.h"


int main(int argc, char **argv)
{
	t_game *g;

	check_args(argc, argv);
	g = malloc(sizeof(t_game));
	init_game(g, argv[1]);
	mlx_hook(g->win, 3, 0, &keyhooks, g);
	mlx_hook(g->win, 17, 0, &endgame, g);
	mlx_loop(g->mlx);
	return (0);
}
