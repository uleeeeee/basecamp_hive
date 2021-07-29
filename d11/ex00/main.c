/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tulenius <tulenius@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/21 07:35:06 by tulenius          #+#    #+#             */
/*   Updated: 2021/07/21 10:52:47 by tulenius         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"
#include <stdio.h>

t_list *ft_create_elem(void *data);

int main(void)
{
	int inum;
	char *arr;
	t_list *ptr;
	t_list *ptr2;

	ptr = ft_create_elem(&inum);
	ptr2 = ft_create_elem(&arr);
	ptr->data = (int*) 21;
	ptr->next = ptr2;
	ptr2->data = "Sauna";
	printf("%d %s\n", (int) ptr->data * 2, (char *) ptr2->data);
	return (0);
}
