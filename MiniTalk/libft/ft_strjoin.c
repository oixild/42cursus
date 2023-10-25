/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsabater <dsabater@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 12:58:10 by dsabater          #+#    #+#             */
/*   Updated: 2023/05/22 13:32:51 by dsabater         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	str = (char *)malloc(sizeof(*s1) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!str)
		return (NULL);
	while (s1[i] != '\0')
	{
		str[j] = s1[i];
		j++;
		i++;
	}
	i = 0;
	while (s2[i] != '\0')
	{
		str[j] = s2[i];
		j++;
		i++;
	}
	str[j] = 0;
	return (str);
}
