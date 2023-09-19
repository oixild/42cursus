/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsabater <dsabater@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 10:20:49 by dsabater          #+#    #+#             */
/*   Updated: 2023/09/11 11:11:41 by dsabater         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	first_word(char *a)
{
	int	i;

	i = 0;
	while (a[i] == ' ')
	{	
		i++;
	}
	while (a[i] != '\0' && a[i] != ' ')
	{
		write(1, &a[i], 1);
		i++;
	}
	return (0);
}

int main(int argc, char *argv[])
{
	if (argc != 2)
		write(1, "\n", 1);
	else
	{
		first_word(argv[1]);
		write(1, "\n", 1);
	}
}
