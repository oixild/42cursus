/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsabater <dsabater@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 13:26:30 by dsabater          #+#    #+#             */
/*   Updated: 2023/08/16 13:12:56 by dsabater         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <limits.h>

int				ft_printf(char const *str, ...);
int				ft_printf_process(char const *element, va_list str);
int				ft_printformat(char specifier, va_list ar);
int				ft_putnbr(unsigned long n);
int				ft_putnbr_u(unsigned int n);
int				ft_putstr(char *s);
int				ft_putchar(char s);
int				ft_put_p(unsigned long long n, int base);
int				ft_puthex_u(unsigned int n, int base);
int				ft_puthex(unsigned long long n, int base);
char			*ft_itoa(int n);
char			*ft_utoa(unsigned int n);
char			*ft_strcpy(char *dest, char *src);

#endif
