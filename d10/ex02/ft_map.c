/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tulenius <tulenius@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/20 11:19:25 by tulenius          #+#    #+#             */
/*   Updated: 2021/07/20 12:23:46 by tulenius         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_map(int *tab, int length, int (*f)(int))
{
	int i;
	int *return_value;

	i = 0;
	return_value = (malloc(sizeof(int) * length));
	while (i < length)
	{
		return_value[i] = (*f)(tab[i]);
		i++;
	}
	return (return_value);
}
