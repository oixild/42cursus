/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsabater <dsabater@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 15:41:58 by dsabater          #+#    #+#             */
/*   Updated: 2023/05/10 15:15:47 by dsabater         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// BZERO: La función escribe (NULOS) en los bytes de la string
#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*str;
	size_t			i;

	i = 0;
	str = s;
	while (i < n)
	{
		str[i] = (unsigned char)0;
		i++;
	}
}
