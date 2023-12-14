/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   valid_exit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsabater <dsabater@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 11:12:06 by dsabater          #+#    #+#             */
/*   Updated: 2023/12/14 11:12:29 by dsabater         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/so_long.h"

void	search_c_e(char *mapcpy, int width)
{
	int	i;

	i = 0;
	while (i < ft_strlen(mapcpy))
	{
		if (mapcpy[i] == 'E')
			break ;
		i++;
	}
	if (mapcpy[i + 1] == '*' || mapcpy[i - 1] == '*' || \
		mapcpy[i + width] == '*' || mapcpy[i - width] == '*')
		return ;
	else
		print_error("Error\nCannot reach the exit or any rat!");
}
