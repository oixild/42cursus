/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsabater <dsabater@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 15:07:55 by dsabater          #+#    #+#             */
/*   Updated: 2023/10/29 09:36:56 by dsabater         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/minitalk.h"

int	argumen_error(int argc)
{
	if (argc < 3)
	{
		ft_printf("Error: Arguments missing\n");
		return (1);
	}
	if (argc > 3)
	{
		ft_printf("Error: Too many Arguments\n");
		return (1);
	}
	return (1);
}

void	send_str_to_bit(int pid, char c)
{
	int	bit;

	bit = 0;
	while (bit < 8)
	{
		if ((c & (0x01 << bit)))
			kill(pid, SIGUSR1);
		else
			kill(pid, SIGUSR2);
		usleep(50);
		bit++;
	}
}

int	main(int argc, char **argv)
{
	int	pid;
	int	i;

	i = 0;
	if (argc == 3)
	{
		pid = ft_atoi(argv[1]);
		while (argv[2][i] != '\0')
		{
			send_str_to_bit(pid, argv[2][i]);
			i++;
		}
		send_str_to_bit(pid, '\n');
	}
	else
	{
		argumen_error(argc);
	}
	return (0);
}
