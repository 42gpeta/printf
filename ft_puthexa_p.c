/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa_p.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpeta <gpeta@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/24 17:12:57 by gpeta             #+#    #+#             */
/*   Updated: 2022/12/26 18:54:22 by gpeta            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_puthexa_u(long unsigned int n);

// *** VERSION : classique *** 

int	ft_puthexa_p(void *n)
{
	write(1, "0x", 2);
	ft_puthexa_u((long unsigned int)n);
}

int	ft_puthexa_u(long unsigned int n)
{
	int	count;
	char	*base;

	base = "0123456789abcdef";
	count = 0;
	if (n >= 0 && n < 16)
	{
		ft_putchar(base[n]);
		count++;
	}
	else
	{
		count += ft_puthexa_u(n / 16);
		count += ft_puthexa_u(n % 16);
	}
	return (count);
}



//	*** VERSION : Aya *** 

/* int	ft_puthexa_p(char *base, int n, char c) 
{
	int	count;
	// char	*base;

	if (c == 'x')
		base = "0123456789abcdef";
	else if (c == 'X')
		base = "0123456789ABCDEF";
	count = 0;
	if (n >= 0 && n < 16)
	{
		ft_putchar(base[n]);
		count++;
	}
	else
	{
		count += ft_puthexa_p(n / 16, c);
		count += ft_puthexa_p(n % 16, c);
	}
	return (count);
} */

/* *************************************
				MAIN
************************************* */

int	main(void)
{
	int	tnbr = 78;
	int	*ptnbr = &tnbr;

	// char	bx[16] = "0123456789abcdef";
	// char	bX[16] = "0123456789ABCDEF";

	ft_puthexa_p(ptnbr);
	ft_putchar('\n');
	printf("%d\n", ft_puthexa_p(ptnbr));
	printf("\npointeur de tnbr : %p\n", ptnbr);

	return (0);
}
