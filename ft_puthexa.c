/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpeta <gpeta@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/24 17:12:57 by gpeta             #+#    #+#             */
/*   Updated: 2022/12/26 16:57:13 by gpeta            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

// *** VERSION : classique *** 

int	ft_puthexa(int n, char c)
{
	int		count;
	char	*base;

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
		count += ft_puthexa(n / 16, c);
		count += ft_puthexa(n % 16, c);
	}
	return (count);
}

//	*** VERSION : Aya *** 

/* int	ft_puthexa(char *base, int n, char c) 
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
		count += ft_puthexa(n / 16, c);
		count += ft_puthexa(n % 16, c);
	}
	return (count);
} */

/* *************************************
				MAIN
************************************* */

/* int	main(void)
{
	int tnbr = 78;

	// char	bx[16] = "0123456789abcdef";
	// char	bX[16] = "0123456789ABCDEF";

	ft_puthexa(tnbr, 'X');
	ft_putchar('\n');
	printf("%x\n", ft_puthexa(tnbr, 'X'));

	return (0);
} */
