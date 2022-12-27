/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa_p.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpeta <gpeta@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/24 17:12:57 by gpeta             #+#    #+#             */
/*   Updated: 2022/12/27 18:29:47 by gpeta            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthexa_u(long unsigned int n);

// *** VERSION : classique *** 

int	ft_puthexa_p(void *n)
{
	int	count_final;

	count_final = 0;
	if (!n)
	{
		write(1, "(nil)", 5);
		return (count_final += 5);
	}
	else
	{
		count_final += write(1, "0x", 2);
		count_final += ft_puthexa_u((long unsigned int)n);
	}
	return (count_final);
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

// /* int	main(void)
// {
// 	int	tnbr = 16;
// 	int	*ptnbr = NULL /*&tnbr*/;

// 	ft_puthexa_p(ptnbr);
// 	ft_putchar('\n');
// 	printf(" pointeur FT : %p\n", ft_puthexa_p(ptnbr));
// 	printf(" len FT: %d\n", ft_puthexa_p(ptnbr));
// 	printf("\n PRINTF : %p\n", ptnbr);

// 	return (0);
// } */
