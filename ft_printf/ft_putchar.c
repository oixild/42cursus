/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsabater <dsabater@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 13:04:21 by dsabater          #+#    #+#             */
/*   Updated: 2023/08/16 12:26:38 by dsabater         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(char s)
{
	int	count;

	count = (write(1, &s, 1));
	if (count < 0)
		return (-1);
	return (count);
}
