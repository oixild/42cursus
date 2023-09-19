/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsabater <dsabater@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 11:21:14 by dsabater          #+#    #+#             */
/*   Updated: 2023/09/11 15:32:13 by dsabater         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdlib.h"
#include "stdio.h"

int	ft_strlen(char *str)
{
	int	i;

	i= 0;
	while (str[i])
		i++;
	return (i);
}


char	*ft_strdup(char	*src)
{
	int i;
	char *str;

	i = 0;
	str = malloc(sizeof(*src) * (ft_strlen(src) + 1));
	if (!src)
		return (NULL);	
	while (src[i])
	{
		str[i] = src[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

int main(int argc, char **argv)
{
	char *str;

	if (argc < 2)
	{
		printf("Error: Se necesita 1 argumento.\n");
		return (1);
	}
	if (argc > 2)
	{
		printf("Error: Solo se acepta 1 argumento.\n");
		return (1);
	}
	str = ft_strdup(argv[1]);
	printf("%s", str);
	free(str);
	return (0);
}
