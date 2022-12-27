/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpeta <gpeta@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/24 17:12:09 by gpeta             #+#    #+#             */
/*   Updated: 2022/12/27 16:27:55 by gpeta            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int n)
{
	long	nl;
	int	count;
	nl = (long)n;

	count = 0;
	if (n == -2147483648)
	{
		write(1, "-2147483648", 11);
		count = 11;
	}
	else if (n < 0)
	{
		count += write(1, "-", 1);
		count += ft_putnbr(n * -1);
	}
	else if (n >= 0 && n <= 9)
	{
		ft_putchar(n + '0');
		count++;
	}
	else
	{
		count += ft_putnbr(n / 10);
		count += ft_putnbr(n % 10);
	}
	return (count);
}

/* *************************************
				MAIN
************************************* */

/* int main(void)
{
	int tnbr = 12;

	ft_putnbr(tnbr);
	ft_putchar('\n');
	printf("%d\n", ft_putnbr(tnbr));

	return (0);
} */
