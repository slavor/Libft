/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slavor <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/06 23:44:12 by slavor            #+#    #+#             */
/*   Updated: 2018/03/18 18:47:26 by slavor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *dst, const void *src, size_t n)
{
	unsigned char *dest;
	unsigned char *sorc;

	dest = (unsigned char *)dst;
	sorc = (unsigned char *)src;
	while (n--)
	{
		if (*dest != *sorc)
			return (*dest - *sorc);
		dest++;
		sorc++;
	}
	return (0);
}
