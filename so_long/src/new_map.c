/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   new_map.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsabater <dsabater@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 09:41:49 by dsabater          #+#    #+#             */
/*   Updated: 2023/12/05 12:05:24 by dsabater         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/so_long.h"

/* int map_load(t_game *g, char *fpath)
{
	int	fd;

	fd = open(fpath, O_RDONLY);
	if (fd < 0)
		{
			print_error("Error: File cannot be loaded");
			return (0);
		}
		else
		{
			map_create(g, fd);
			close (fd);
			return(1);
		}
}*/
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
/* void	map_create(t_game *g, int fpath)
{
	char	*line;
	char	*tmp;

	g->map = malloc(1 * sizeof(char));
	if (g->map == 0)
		return ;
	g->map[0] = '\0';
	line = get_next_line(fpath);
	while (line)
	{
		g->height++;
		g->width = ft_strlen(line) - 1;
		line[g->width] = '\0';
		tmp = g->map;
		g->map = ft_strjoin(tmp, line);
		free(tmp);
		tmp = NULL;
		free(line);
		line = NULL;
		line = get_next_line(fpath);
	}
	free(line);
} */