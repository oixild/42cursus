/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_itoa.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsabater <dsabater@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 12:51:00 by dsabater          #+#    #+#             */
/*   Updated: 2023/11/06 11:34:17 by dsabater         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	num_counter(int n)
{
	int	len;

	len = 0;
	if (n == -2147483648)
		len = 11;
	else if (n <= 0)
	{
		len++;
		n *= -1;
	}
	while (n > 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

static int	makenegative(int n, char *str)
{
	if (n < 0)
	{
		str[0] = '-';
		n *= -1;
	}
	return (n);
}

char	*ft_printf_itoa(int n)
{
	int		len;
	char	*str;

	len = num_counter(n);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	str[len] = '\0';
	if (n == 0)
		str[0] = '0';
	else if (n == -2147483648)
		ft_printf_strcpy(str, "-2147483648");
	else
	{
		n = makenegative(n, str);
		while (n > 0)
		{
			str[--len] = (n % 10) + '0';
			n = (n / 10);
		}
	}
	return (str);
}
