/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsabater <dsabater@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 12:10:34 by dsabater          #+#    #+#             */
/*   Updated: 2023/11/06 11:49:09 by dsabater         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_types(char specifier, va_list ar)
{
	int	count;

	count = 0;
	if (specifier == 'c')
		count = ft_printf_putchar((char)va_arg(ar, int));
	else if (specifier == 's')
		count = ft_printf_putstr(va_arg(ar, char *));
	else if (specifier == '%')
		count = ft_printf_putchar('%');
	else if (specifier == 'd' || specifier == 'i')
		count = ft_printf_putnbr(va_arg(ar, unsigned long));
	else if (specifier == 'u')
		count = ft_printf_putnbr_u(va_arg(ar, unsigned int));
	else if (specifier == 'x')
		count = ft_printf_puthex(va_arg(ar, unsigned int), 16);
	else if (specifier == 'X')
		count = ft_printf_puthex_u(va_arg(ar, unsigned int), 16);
	else if (specifier == 'p')
		count = ft_printf_put_p(va_arg(ar, unsigned long long), 16);
	return (count);
}

int	ft_printf(const char *format, ...)
{
	va_list	ar;
	int		count;
	int		i;

	va_start(ar, format);
	count = 0;
	while (*format)
	{
		if (*format == '%')
			i = ft_types(*(++format), ar);
		else
			i = write(1, format, 1);
		if (i < 0)
			return (-1);
		count += i;
		format++;
		va_end(ar);
	}
	return (count);
}
