/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpeta <gpeta@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 19:07:04 by gpeta             #+#    #+#             */
/*   Updated: 2022/12/26 17:02:25 by gpeta            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <stdio.h>
# include <bsd/string.h>
# include <stdlib.h>
# include <ctype.h>
# include <unistd.h>

// int	ft_printf(const char *, ...);
int	ft_putchar	(char c);
int	ft_puthexa	(int n, char c); // a voir avec Aya
// int	ft_puthexa	(char *base, int n, char c); // a voir avec Aya (char *)
int	ft_putnbr	(int n);
int	ft_putnbr_u	(unsigned int n);
int	ft_putstr	(char *s);

#endif