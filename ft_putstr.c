/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpeta <gpeta@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/24 17:13:00 by gpeta             #+#    #+#             */
/*   Updated: 2022/12/27 16:27:58 by gpeta            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *s)
{
	int	count;

	count = 0;
	if (!s)
	{
		// write(1, "(null)", 6);
		return (write(1, "(null)", 6));
	}
	while (*s)
	{
		ft_putchar(*s++);
		count++;
	}
	return (count);
}
