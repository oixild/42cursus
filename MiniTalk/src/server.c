/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsabater <dsabater@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 15:07:53 by dsabater          #+#    #+#             */
/*   Updated: 2023/10/25 16:35:11 by dsabater         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/minitalk.h"

void	handler(int sig)
{
	if (sig == SIGUSR1)
		ft_printf("He recibido SIGUSR1\n");
}

int	main(int argc, char **argv)
{
	int	pid;

	argv = NULL;
	if (argc != 1)
	{
		ft_printf("Argument Error\n");
		return (1);
	}
	pid = getpid();
	ft_printf("Pid: %i\n", pid);
	signal(SIGUSR1, handler);
	while(1)
		;
}
