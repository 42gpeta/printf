/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpeta <gpeta@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 19:07:04 by gpeta             #+#    #+#             */
/*   Updated: 2022/12/24 19:30:56 by gpeta            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <stdio.h>
# include <bsd/string.h>
# include <stdlib.h>
# include <ctype.h>
# include <unistd.h>

int		ft_printf(const char *, ...);
void	ft_putchar	(char c);
// void	ft_puthexa	(char *base, int n, char*); // a voir avec Aya
void	ft_putnbr	(int n);
// void	ft_putnbr_u	(unsigned int n);
void	ft_putstr	(char *s);

// avec pointeur de fonction

void	ft_putnbr_u(void *n); // w/ pointeur de fonction

#endif