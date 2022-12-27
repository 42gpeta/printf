/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpeta <gpeta@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/24 19:03:18 by gpeta             #+#    #+#             */
/*   Updated: 2022/12/27 18:33:35 by gpeta            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *str, ...)
{
	int		i;
	int		len;
	va_list	args;

	va_start(args, str);
	i = 0;
	len = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '%')
		{
			i++;
			len += f_check(args, str[i]);
		}
		else
			len += write(1, &str[i], 1);

		i++;
	}

	va_end(args);
	return (len);
}

/* *************************************
				MAIN
************************************* */

// int	main(void)
// {
// 	int str[2] = {16, 15};

// 	printf("len ft_printf : %d\n", ft_printf("me  : %p\n", 16));
// 	printf("len printf : %d\n", printf("man : %p\n", 16));

// 	return (0);
// }
