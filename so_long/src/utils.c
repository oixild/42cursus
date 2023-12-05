/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsabater <dsabater@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 11:48:34 by dsabater          #+#    #+#             */
/*   Updated: 2023/12/05 12:06:12 by dsabater         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/so_long.h"

char	*ft_strdup_no_nl(char *s1)
{
	char	*str;
	int		i;

	i = 0;
	str = (char *)malloc(sizeof(*s1) * (ft_strlen(s1) + 1));
	if (!(str))
		return (NULL);
	while (s1[i] && s1[i] != '\n')
	{
		str[i] = s1[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
int	ft_strlcpy_no_nl(char *dst, char *src, int dstsize)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (src[i])
		i++;
	if (dstsize == 0)
		return (i);
	while (j < dstsize - 1 && *src && *src != '\n')
	{
		*dst = *src;
		dst++;
		src++;
		j++;
	}
	*dst = '\0';
	return (i);
}
char	*ft_strjoin_no_nl(char *s1, char *s2)
{
	char	*str;
	size_t	s1_len;
	size_t	s2_len;

	str = NULL;
	if (s1 == NULL && s2 == NULL)
		return (NULL);
	else if (s1 == NULL)
		return (ft_strdup_no_nl(s2));
	else if (s2 == NULL)
		return (ft_strdup_no_nl(s1));
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	str = malloc(s1_len + s2_len);
	if (!(str))
		return (NULL);
	ft_strlcpy_no_nl(str, s1, s1_len + 1);
	ft_strlcpy_no_nl(str + s1_len, s2, s2_len + 1);
	free(s1);
	free(s2);
	return (str);
}
