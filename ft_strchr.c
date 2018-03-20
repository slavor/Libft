/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slavor <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/27 13:45:12 by slavor            #+#    #+#             */
/*   Updated: 2018/03/16 16:32:08 by slavor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	find;

	i = 0;
	find = (char)c;
	while (s[i] != '\0')
	{
		if (s[i] == find)
			return (char *)(s + i);
		i++;
	}
	if (s[i] == find)
		return (char *)(s + i);
	return (NULL);
}
