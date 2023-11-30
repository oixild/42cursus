/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsabater <dsabater@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 13:26:31 by dsabater          #+#    #+#             */
/*   Updated: 2023/11/30 11:29:41 by dsabater         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/so_long.h"

static void	print_error(char *msg)
{
	ft_putendl_fd(msg, 2);
	exit(0);
}

void	check_args(int argc, char **argv)
{
	int		fd;

	if (argc != 2)
		print_error("Invalid number of arguments!");
	fd = open(argv[1], O_RDONLY);
	if (fd < 0)
		print_error("File not found!");
	if (ft_strrncmp(argv[1], ".ber", 4))
		print_error("Invalid file type, use .ber!");
}
