/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_puthex.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsabater <dsabater@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 12:50:49 by dsabater          #+#    #+#             */
/*   Updated: 2023/11/06 11:51:55 by dsabater         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_puthex(unsigned long long n, int base)
{
	int		count;
	int		aux;
	char	*symbols;

	count = 1;
	symbols = "0123456789abcdef";
	if (n < (unsigned int)base)
		return (ft_printf_putchar(symbols[n]));
	else
	{
		aux = ft_printf_puthex(n / base, base);
		if (aux == -1)
			return (-1);
		count = aux;
		return (count + ft_printf_puthex(n % base, base));
	}
}

int	ft_printf_puthex_u(unsigned int n, int base)
{
	int		count;
	int		aux;
	char	*symbols;

	count = 1;
	symbols = "0123456789ABCDEF";
	if (n < (unsigned int)base)
		return (ft_printf_putchar(symbols[n]));
	else
	{
		aux = ft_printf_puthex_u(n / base, base);
		if (aux == -1)
			return (-1);
		count = aux;
		return (count + ft_printf_puthex_u(n % base, base));
	}
}

int	ft_put_p(unsigned long long n, int base)
{
	int	ret;

	ret = write(1, "0x", 2);
	if (ret < 0)
		return (-1);
	return (ft_printf_puthex(n, base) + ret);
}
