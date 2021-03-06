/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_min.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slavor <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/19 19:30:43 by slavor            #+#    #+#             */
/*   Updated: 2018/03/19 19:30:47 by slavor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_min(int *arr, int n)
{
	int i;
	int max;

	max = arr[0];
	i = 1;
	while (i < n)
	{
		if (arr[i] < max)
			max = arr[i];
		i++;
	}
	return (max);
}
