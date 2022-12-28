/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpeta <gpeta@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 16:57:08 by gpeta             #+#    #+#             */
/*   Updated: 2022/12/23 15:02:34 by gpeta            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*ps1;
	unsigned char	*ps2;
	size_t			i;
	signed int		res;

	ps1 = (unsigned char *)s1;
	ps2 = (unsigned char *)s2;
	i = 0;
	res = 0;
	while (i < n)
	{
		if (ps1[i] > ps2[i])
		{
			res = ps1[i] - ps2[i];
			return (res);
		}
		else if (ps1[i] < ps2[i])
		{
			res = ps1[i] - ps2[i];
			return (res);
		}
		i++;
	}
	return (res);
}
