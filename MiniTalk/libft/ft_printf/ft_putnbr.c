/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsabater <dsabater@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 12:10:38 by dsabater          #+#    #+#             */
/*   Updated: 2023/08/16 12:25:39 by dsabater         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(unsigned long n)
{
	char	*str;
	int		i;

	i = 0;
	str = ft_itoa(n);
	if (!str)
		return (-1);
	i = ft_putstr(str);
	free(str);
	if (i < 0)
		return (-1);
	return (i);
}

int	ft_putnbr_u(unsigned int n)
{
	char	*str;
	int		i;

	i = 0;
	str = ft_utoa(n);
	if (!str)
		return (-1);
	i = ft_putstr(str);
	free(str);
	if (i < 0)
		return (-1);
	return (i);
}
