/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_u.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpeta <gpeta@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/24 18:29:54 by gpeta             #+#    #+#             */
/*   Updated: 2022/12/24 19:51:45 by gpeta            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

/* void	ft_putnbr_u(unsigned int n) // classique
{
	if (n >= 0 && n <= 9)
	{
		ft_putchar(n + '0');
	}
	else
	{
		ft_putnbr_u(n / 10);
		ft_putnbr_u(n % 10);
	}
} */

void	ft_putnbr_u(void *n) // w/ pointeur de fonction
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
}
