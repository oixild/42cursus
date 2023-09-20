/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsabater <dsabater@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 12:52:25 by dsabater          #+#    #+#             */
/*   Updated: 2023/05/12 15:15:40 by dsabater         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_destbigsource(unsigned char *dest, unsigned char *source, size_t len)
{
	int	j;

	j = 0;
	while (j < (int)len)
	{
		dest[len - 1 - j] = source[len - 1 - j];
		j++;
	}
}

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*dest;
	unsigned char	*source;
	size_t			i;

	dest = (unsigned char *)dst;
	source = (unsigned char *)src;
	i = 0;
	if (source == 0 && dest == 0)
		return (dest);
	if (dest < source)
	{
		while (i < len)
		{
			dest[i] = source[i];
			i++;
		}
	}
	else if (dest > source)
	{
		ft_destbigsource(dest, source, len);
	}
	return (dest);
}
