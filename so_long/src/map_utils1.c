/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_utils1.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsabater <dsabater@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 09:41:49 by dsabater          #+#    #+#             */
/*   Updated: 2023/11/27 13:22:32 by dsabater         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/so_long.h"

void	map_create(t_game *g, int fd)
{
	char	*line;
	char	*tmp;

	g->map = malloc(1 * sizeof(char));
	if (g->map == 0)
		return ;
	g->map[0] = '\0';
	line = get_next_line(fd);
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
		line = get_next_line(fd);
	}
	free(line);
}
