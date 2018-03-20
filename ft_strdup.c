/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slavor <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/22 23:01:15 by slavor            #+#    #+#             */
/*   Updated: 2018/03/16 15:06:15 by slavor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**1. allocate space for a new string, setting the size the same as the
**original string 2.Copies the original string into the new
**allocated space, including the null charcter
*/

char		*ft_strdup(const char *src)
{
	int		org_size;
	char	*dup;
	char	*tmp;

	org_size = ft_strlen(src);
	dup = (char*)malloc(sizeof(char) * org_size + 1);
	if (dup == NULL)
		return ((char*)NULL);
	tmp = dup;
	while (*src)
	{
		*tmp = *src;
		tmp++;
		src++;
	}
	*tmp = '\0';
	return (dup);
}
