/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slavor <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/06 19:32:55 by slavor            #+#    #+#             */
/*   Updated: 2018/03/18 18:43:19 by slavor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t	i;
	char	*sorc;
	char	*dest;

	sorc = (char *)src;
	dest = (char *)dst;
	i = 0;
	while (i < n)
	{
		*(dest + i) = *(sorc + i);
		if (*(sorc + i) == (char)c)
			return (dest + i + 1);
		i++;
	}
	return (NULL);
}
