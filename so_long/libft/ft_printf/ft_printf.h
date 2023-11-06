/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsabater <dsabater@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 13:26:30 by dsabater          #+#    #+#             */
/*   Updated: 2023/11/06 11:13:10 by dsabater         ###   ########.fr       */
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
int				ft_printf_putnbr(unsigned long n);
int				ft_printf_putnbr_u(unsigned int n);
int				ft_printf_putstr(char *s);
int				ft_printf_putchar(char s);
int				ft_printf_put_p(unsigned long long n, int base);
int				ft_printf_puthex_u(unsigned int n, int base);
int				ft_printf_puthex(unsigned long long n, int base);
char			*ft_printf_itoa(int n);
char			*ft_printf_utoa(unsigned int n);
char			*ft_printf_strcpy(char *dest, char *src);

#endif
