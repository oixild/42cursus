/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsabater <dsabater@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 11:55:16 by dsabater          #+#    #+#             */
/*   Updated: 2023/11/06 11:10:24 by dsabater         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*limpiarsaved(char *saved)
{
	char	*new_saved;
	char	*ptr;
	int		len;

	ptr = ft_strchr(saved, '\n');
	if (!ptr)
	{
		ft_free(&saved);
		return (NULL);
	}
	else
		len = (ptr - saved) + 1;
	if (!saved[len])
		{
			ft_free(&saved);
			return (NULL);
		}
	new_saved = ft_substr(saved, len, ft_strlen(saved) - len);
	free(saved);
	if (!new_saved)
	{
		free(new_saved);
		return (NULL);
	}
	return (new_saved);
}

char	*new_line(char *saved)
{
	char	*line;
	char	*ptr;
	int		len;

	ptr = ft_strchr(saved, '\n');
	len = (ptr - saved) + 1;
	line = ft_substr(saved, 0, len);
	if (!line)
	{
		free(line);
		return (NULL);
	}
	return (line);
}

char	*readbuf(int fd, char *saved)
{
	int		bytesleidos;
	char	*buffer;

	buffer = malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!buffer)
		return (NULL);
	bytesleidos = 1;
	while (bytesleidos > 0 && ft_strchr(saved, '\n') == 0)
	{
		bytesleidos = read(fd, buffer, BUFFER_SIZE);
		if (bytesleidos == -1)
		{
			free(buffer);
			return (ft_free(&saved));
		}
		if (bytesleidos > 0)
		{
			buffer[bytesleidos] = '\0';
			saved = ft_strjoin(saved, buffer);
			if (!saved)
				ft_free(&buffer);
		}
	}
	free(buffer);
	return (saved);
}

char	*get_next_line(int fd)
{
	char		*line;
	static char	*saved = {0};

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	if (!saved || (saved && !ft_strchr(saved, '\n')))
		saved = readbuf(fd, saved);
	if (!saved)
		return (NULL);
	line = new_line(saved);
	if (!line)
		return (ft_free(&saved));
	saved = limpiarsaved(saved);
	return (line);
}
