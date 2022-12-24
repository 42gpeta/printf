/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpeta <gpeta@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/24 17:12:57 by gpeta             #+#    #+#             */
/*   Updated: 2022/12/24 17:32:07 by gpeta            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_puthexa(int n, char c)
{
	char	*base;

	if (c == 'x')
		base = "0123456789abcdef";
	else if (c == 'X')
		base = "0123456789ABCEDF";
	if (n >= 0 && n <= 9)
		ft_puthexa(n + '0', c);
	else
		ft_putbase(base[])
}