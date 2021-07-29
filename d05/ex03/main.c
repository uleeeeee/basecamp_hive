/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tulenius <tulenius@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/13 13:02:23 by tulenius          #+#    #+#             */
/*   Updated: 2021/07/13 15:04:18 by tulenius         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>

void	ft_putstr(char *ch);
char	*ft_strcpy(char *dest, char *src);

int		main()
{
	char str1[] = "Hello";
	char str2[] = "asdasd";

	ft_putstr(str1);
	ft_putstr(str2);

	ft_strcpy(str1, str2);

	ft_putstr(str1);
	ft_putstr(str2);
	
	return (0);
}