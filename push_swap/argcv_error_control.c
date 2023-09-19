/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   argcv_error_control.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsabater <dsabater@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 15:06:19 by dsabater          #+#    #+#             */
/*   Updated: 2023/09/19 10:18:43 by dsabater         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int verificar_enteros_repetidos(char *argv[])
{
	int i;
	int j;
	int result;

	i = 1;
	while (argv[i])
	{
		j = i + 1;
		while (argv[j])
		{
			if (ft_atoi(argv[i]) == ft_atoi(argv[j]))
			{
				write(1, "error", 5);
				//ft_printf("Error: The argument %s is repeated.\n", argv[i]);
				return 1; // Detenerse cuando se encuentra un número repetido
			}
			j++;
		}
		result = ft_atoi(argv[i]);
		if (!(result != 0))
		{
			write(1, "error", 5);
			//ft_printf("Error: The argument %s is not an integer.\n", argv[i]);
			return 1; // Detenerse si se encuentra un argumento no válido
		}
		i++;
	}
	return 0;
}

int argcv_error_control(int argc, char *argv[])
{
	int resultado_verificar;
	if (argc < 2)
	{
		write(1, "error", 5);
		//ft_printf("Error: Debes proporcionar al menos un argumento.\n");
		return 1;
	}
	resultado_verificar = verificar_enteros_repetidos(argv);
	return resultado_verificar;
}
