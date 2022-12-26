/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpeta <gpeta@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/24 17:39:21 by gpeta             #+#    #+#             */
/*   Updated: 2022/12/26 17:00:12 by gpeta            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

// main pour CHAR - HEXA - NBR - NBR_U - STR
int	main(void)
{
	char tchar = 'b';
	int thexa = 156;
	int tnbr = -1;
	int tnbr_u = -1;
	char tstr[] = "bonjour";

	ft_putchar(tchar);
	ft_putchar('\n');
	ft_puthexa(thexa, 'x');
	ft_putchar('\n');
	ft_puthexa(thexa, 'X');
	ft_putchar('\n');
	ft_putnbr(tnbr);
	ft_putchar('\n');
	ft_putnbr_u(tnbr_u);
	ft_putchar('\n');
	ft_putstr(tstr);
	ft_putchar('\n');
	printf("%%u : %u\n", -1);

	return (0);
}