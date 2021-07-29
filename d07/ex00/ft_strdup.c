/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tulenius <tulenius@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 08:51:45 by tulenius          #+#    #+#             */
/*   Updated: 2021/07/15 18:24:59 by tulenius         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str);
char	*ft_strcpy(char *dest, char *src);

char	*ft_strdup(char *src)
{
	char *destination_memory;

	destination_memory = malloc(ft_strlen(src) + 1);
	if (destination_memory == NULL)
	{
		return (NULL);
	}
	ft_strcpy(destination_memory, src);
	return (destination_memory);
}

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strcpy(char *dest, char *src)
{
	char *returning;

	returning = dest;
	while (*src != 0)
	{
		*dest = *src;
		++dest;
		++src;
	}
	*dest = '\0';
	return (returning);
}
