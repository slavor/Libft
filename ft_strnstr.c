/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slavor <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/08 20:28:01 by slavor            #+#    #+#             */
/*   Updated: 2018/03/18 19:02:04 by slavor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *hay, const char *needle, size_t len)
{
	size_t i;
	size_t j;

	i = 0;
	if (!*needle)
		return (char *)hay;
	while (hay[i] && i < len)
	{
		j = 0;
		while (hay[i + j] == needle[j] && i + j < len)
		{
			j++;
			if (!needle[j])
				return ((char *)hay + i);
		}
		i++;
	}
	return (NULL);
}
