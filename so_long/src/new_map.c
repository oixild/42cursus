/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   new_map.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsabater <dsabater@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 09:41:49 by dsabater          #+#    #+#             */
/*   Updated: 2023/12/11 09:43:50 by dsabater         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/so_long.h"

void	map_load(t_game *g, char *fpath)
{
	int		fd;
	char	*line;

	fd = open(fpath, O_RDONLY);
	if (fd <= 0)
		print_error("File open fail.");
	line = get_next_line(fd);
	g->height = 0;
	g->walk_count = 0;
	g->width = ft_strlen(line) - 1;
	g->map = ft_strdup_no_nl(line);
	free(line);
	while (line)
	{
		g->height++;
		line = get_next_line(fd);
		if (line)
		{
			g->map = ft_strjoin_no_nl(g->map, line);
		}
	}
	close(fd);
}
