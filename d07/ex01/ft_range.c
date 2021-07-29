/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tulenius <tulenius@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 10:42:11 by tulenius          #+#    #+#             */
/*   Updated: 2021/07/15 18:03:47 by tulenius         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int i;
	int *array;
	int size;
	int *ip;

	ip = NULL;
	size = max - min;
	if (min >= max)
	{
		return (ip);
	}
	else
	{
		array = malloc(sizeof(int) * size);
		i = 0;
		while (i < size)
		{
			array[i] = min;
			i++;
			min++;
		}
		return (array);
	}
}
