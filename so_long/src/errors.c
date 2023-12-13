/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsabater <dsabater@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 13:26:31 by dsabater          #+#    #+#             */
/*   Updated: 2023/12/13 11:14:20 by dsabater         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/so_long.h"

void	print_error(char *msg)
{
	ft_putendl_fd(msg, 2);
	exit(0);
}

void	check_args(int argc, char **argv)
{
	int		fd;

	if (argc != 2)
		print_error("Error\nInvalid number of arguments!");
	if (!argv[1][0])
		print_error("Error\nYou need to put a correct file path!");
	fd = open(argv[1], O_RDONLY);
	if (ft_strrncmp(argv[1], ".ber", 4))
		print_error("Error\nInvalid file type, use .ber!");
}
