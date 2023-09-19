/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsabater <dsabater@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 16:16:12 by dsabater          #+#    #+#             */
/*   Updated: 2023/05/16 12:44:44 by dsabater         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	const unsigned char	*ptr1;
	const unsigned char	*ptr2;

	ptr1 = s1;
	ptr2 = s2;
	i = 0;
	while (i < n)
	{
		if (ptr1[i] != ptr2[i])
			return (ptr1[i] - ptr2[i]);
		i++;
	}
	return (0);
}

/*
int main() {
    char str1[] = "";
    char str2[] = "";

    int result = ft_memcmp(str1, str2, 5);

    if (result < 0) {
        printf("str1 es menor que str2\n");
    } else if (result == 0) {
        printf("str1 es igual a str2\n");
    } else {
        printf("str1 es mayor que str2\n");
    }
    return 0;
}
*/
