/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tulenius <tulenius@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/08 17:58:51 by tulenius          #+#    #+#             */
/*   Updated: 2021/07/10 09:18:52 by tulenius         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void putchar(int a)
{
	write(1, &a, 2);
}

void	ft_ft();

int		main()
{
	int x;

	x = 5;
	
	int *p = &x;
	
	ft_ft(*p)
	return(0);

}