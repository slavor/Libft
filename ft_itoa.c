/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slavor <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/14 19:49:24 by slavor            #+#    #+#             */
/*   Updated: 2018/03/16 15:27:12 by slavor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_itoa(int n)
{
	char	*str;
	size_t	len;

	len = ft_len(n);
	str = (char *)malloc((len + 1) * sizeof(*str));
	if (!str)
		return (NULL);
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n < 0)
	{
		str[0] = '-';
		n *= -1;
	}
	str[len] = '\0';
	while (n >= 10)
	{
		str[len - 1] = (n % 10) + '0';
		n /= 10;
		len--;
	}
	str[len - 1] = n + '0';
	return (str);
}
