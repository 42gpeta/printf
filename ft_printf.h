/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpeta <gpeta@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 19:07:04 by gpeta             #+#    #+#             */
/*   Updated: 2022/12/27 17:47:04 by gpeta            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <bsd/string.h>
# include <stdlib.h>
# include <ctype.h>
# include <unistd.h>
# include <stdarg.h>

int	ft_printf(const char *str, ...);
int	ft_putchar	(char c);
int	ft_puthexa	(unsigned int n, char c); // a voir avec Aya
// int	ft_puthexa	(char *base, int n, char c); // a voir avec Aya (char *)
int	ft_putnbr	(int n);
int	ft_putnbr_u	(unsigned int n);
int	ft_putstr	(char *s);

int	ft_puthexa_p(void *n);
int	f_check(va_list args, char c);

#endif