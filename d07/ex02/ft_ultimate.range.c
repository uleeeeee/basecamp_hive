/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate.range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tulenius <tulenius@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 19:26:12 by tulenius          #+#    #+#             */
/*   Updated: 2021/07/15 20:38:35 by tulenius         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int *array;
	int i;
	int size;
	int *range;

	ip = NULL;
	size = max - min;
	if (min >= max)
	{
		return (ip);
	}
	else
	{
		*array = malloc(sizeof(int) * size);
		i = 0;
		while (i < size)
		{
			array[i] = min;
			i++;
			min++;
		}
		*range = array;
		return (i);
	}
}
