/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_u.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpeta <gpeta@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/24 18:29:54 by gpeta             #+#    #+#             */
/*   Updated: 2022/12/26 16:57:34 by gpeta            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

// *** VERSION : classique ***

int	ft_putnbr_u(unsigned int n) // classique
{
	int	count;

	count = 0;
	if (n >= 0 && n <= 9)
	{
		ft_putchar(n + '0');
		count++;
	}
	else
	{
		count += ft_putnbr_u(n / 10);
		count += ft_putnbr_u(n % 10);
	}
	return (count);
}

//	*** VERSION : w/ pointeur de fontion ***

/* void	ft_putnbr_u(unsigned int n)
{
	int	pn;

	pn = n;

	if (pn >= 0 && pn <= 9)
	{
		ft_putchar(pn + '0');
	}
	else
	{
		ft_putnbr_u(pn / 10);
		ft_putnbr_u(pn % 10);
	}
} */
