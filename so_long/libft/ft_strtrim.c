/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsabater <dsabater@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 13:08:12 by dsabater          #+#    #+#             */
/*   Updated: 2023/05/24 15:13:24 by dsabater         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_charisinset(char c, char const *set)
{
	while (*set)
	{
		if (c == *set)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	char	*str;

	if (!s1 || !set)
		return (NULL);
	i = 0;
	j = ft_strlen(s1);
	while (s1[i] && ft_charisinset(s1[i], set))
		i++;
	while (j > i && ft_charisinset(s1[j - 1], set))
		j--;
	str = (char *)malloc(sizeof(char) * (j - i + 1));
	if (!str)
		return (NULL);
	ft_memcpy(str, s1 + i, j - i);
	str[j - i] = '\0';
	return (str);
}
