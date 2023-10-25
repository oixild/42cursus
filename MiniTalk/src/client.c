/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsabater <dsabater@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 15:07:55 by dsabater          #+#    #+#             */
/*   Updated: 2023/10/25 16:15:21 by dsabater         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/minitalk.h"

int	main(int argc, char **argv)
{
	int	pid;

	if (argc == 3)
	{

	}
	else
	{
		if (argc <= 3)
		{
			write(1, "Error: Arguments missing", 25);
			return (1);
		}
		if (argc >= 4)
		{
			write(1, "Error: Too many Arguments", 25);
			return (1);
		}
	}
}
