/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsabater <dsabater@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 11:56:02 by dsabater          #+#    #+#             */
/*   Updated: 2023/07/31 10:19:02 by dsabater         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_strdup(char *s1)
{
	char	*str;
	size_t	i;

	str = (char *)malloc(sizeof(*s1) * (ft_strlen(s1) + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		str[i] = s1[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	if (s == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
		i++;
	}
	if (s[i] == (char)c)
		return ((char *)&s[i]);
	return (NULL);
}

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	if (!str)
		return (0);
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strjoin(char *s1, char *s2)
{
	char	*str;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	// if (!s1)
	// 	return(ft_strdup(s2));
	if (!s1)
	{
		s1 = malloc(1 * sizeof (char));
		if (!s1)
			return NULL;
		s1[0] = '\0';
	}
	str = (char *)malloc(sizeof(*s1) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!str)
		return (ft_free(&s1));
	while (s1[i])
		str[j++] = s1[i++];
	i = 0;
	while (s2[i])
		str[j++] = s2[i++];
	str[j] = 0;
	free(s1);
	return (str);
}

char	*ft_substr(char *s, unsigned int start, size_t len)
 {
	size_t	i;
	char	*res;

	i = 0;
	if (!s)
		return (NULL);
	// if (start > ft_strlen(s))
	// {
	// 	res = malloc(sizeof(char) * (1));
	// 	if (!res)
	// 		return (NULL);
	// 	res[0] = '\0';
	// 	return (res);
	// }
	if (ft_strlen(s) - start < len)
		len = ft_strlen(s) - start;
	res = malloc(sizeof(char) * (len + 1));
	if (!res)
		return (NULL);
	while (start < ft_strlen(s) && i < len && s[start])
		res[i++] = s[start++];
	res[i] = '\0';
	return (res);
}
