/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slavor <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/06 21:26:42 by slavor            #+#    #+#             */
/*   Updated: 2018/03/16 17:34:50 by slavor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	char *dest;
	char *sorc;

	dest = (char *)dst;
	sorc = (char *)src;
	if (dest < sorc)
		return (ft_memcpy(dest, sorc, n));
	if (dest > sorc)
	{
		while (n--)
			dest[n] = sorc[n];
	}
	return (dst);
}
