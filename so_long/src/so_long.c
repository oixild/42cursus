/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsabater <dsabater@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 16:33:41 by dsabater          #+#    #+#             */
/*   Updated: 2023/11/29 13:26:07 by dsabater         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/so_long.h"


int main(int argc, char **argv)
{
	t_game game;

	if (argc == 2 && !(is_ber_file(argv[1])))
		endgame("Can't open file. The format is not supported!", &game);
}