/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slavor <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/14 16:25:01 by slavor            #+#    #+#             */
/*   Updated: 2018/03/18 19:12:47 by slavor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	index_lspaces(char const *str)
{
	int i;

	i = 0;
	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t')
		i++;
	return (i);
}

static	int	index_rspaces(char const *str)
{
	int len;

	len = ft_strlen(str);
	if (len == 0)
		return (0);
	while (len > 0 && (str[len - 1] == ' ' || str[len - 1] == '\n'
	|| str[len - 1] == '\t'))
		len--;
	return (len);
}

char		*ft_strtrim(char const *s)
{
	int start;
	int len;

	if (!s)
		return (NULL);
	start = index_lspaces(s);
	len = index_rspaces(s) - start;
	if (len <= 0)
		return (ft_strnew(0));
	return (ft_strsub(s, start, len));
}
