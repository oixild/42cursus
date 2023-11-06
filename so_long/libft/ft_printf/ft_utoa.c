/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsabater <dsabater@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 11:56:16 by dsabater          #+#    #+#             */
/*   Updated: 2023/11/06 11:13:33 by dsabater         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	num_counter_u(unsigned int n)
{
	int	len;

	len = 0;
	if (n == 0)
		len++;
	while (n > 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_printf_utoa(unsigned int n)
{
	int		len;
	char	*str;

	len = num_counter_u(n);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	str[len] = '\0';
	if (n == 0)
		str[0] = '0';
	else
	{
		while (n > 0)
		{
			str[--len] = (n % 10) + '0';
			n = (n / 10);
		}
	}
	return (str);
}
