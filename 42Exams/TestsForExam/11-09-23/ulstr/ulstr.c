/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ulstr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsabater <dsabater@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 13:19:21 by dsabater          #+#    #+#             */
/*   Updated: 2023/09/11 13:48:14 by dsabater         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_ulstr(char *str)
{
	int	i;

	i = 0;
	while(str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;
		else if (str[i] >= 'A' && str [i] <= 'Z')		
			str[i] = str[i] + 32;
		write(1, &str[i], 1);
		i++;
	}
	return (0);
}

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		write(1, "\n", 1);
		return (1);
	}
	ft_ulstr(argv[1]);
	write(1, "\n", 1);
	return (0);
}
