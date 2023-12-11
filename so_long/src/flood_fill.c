/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flood_fill.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsabater <dsabater@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 09:48:54 by dsabater          #+#    #+#             */
/*   Updated: 2023/12/11 13:00:27 by dsabater         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/so_long.h"

void	map_flood_fill(char *mapcpy, int width, int i, int *find, char target)
{
	if (mapcpy[i] == '1' || mapcpy[i] == '*' || *find == 0 || mapcpy[i] == 'E')
	return ;
	if (mapcpy[i] == target)
		*find = *find - 1;
	mapcpy[i] = '*';
	if (*find > 0)
	{
		map_flood_fill(mapcpy, width, i - width, find, target);
		map_flood_fill(mapcpy, width, i + 1, find, target);
		map_flood_fill(mapcpy, width, i + width, find, target);
		map_flood_fill(mapcpy, width, i - 1, find, target);
	}
}

int can_reach_target(t_game *g, char target)
{
	char	*mapcpy;
	int		find;
	int		i;

	mapcpy = ft_strdup(g->map);
	if (target == 'E')
		find = 1;
	else
		find = coll_count(g->map);
	i = 0;
    while (i < ft_strlen(g->map))
	{
		if (g->map[i] == 'P')
			break;
		i++;
	}
	map_flood_fill(mapcpy, g->width, i, &find, target);
	free(mapcpy);
	return (find <= 0);
}

void map_possible_arrival(t_game *g)
{
    if (!can_reach_target(g, 'E') && !can_reach_target(g, 'C'))
        print_error("Cannot reach the exit or any key!");
}
