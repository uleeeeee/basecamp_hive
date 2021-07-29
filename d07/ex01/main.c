/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tulenius <tulenius@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 17:34:51 by tulenius          #+#    #+#             */
/*   Updated: 2021/07/15 18:02:02 by tulenius         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		*ft_range(int min, int max);

int	main()
{
	int *array;
	int i;
	int min;
	int max;

	i = 0;
	min = 20;
	max = 40;
	array = ft_range(min, max);
	while (i < (max - min))
	{
		printf("Number: %d \n", array[i]);
		i++;
	}
	//free(array);
	return (0);
}
