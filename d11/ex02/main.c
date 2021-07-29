/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tulenius <tulenius@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/22 16:22:43 by tulenius          #+#    #+#             */
/*   Updated: 2021/07/22 17:00:18 by tulenius         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdio.h>
#include <stdlib.h>

void ft_list_push_front(t_list **begin_list, void *data);

t_list    *ft_create_elem(void *data)
{
    t_list *rtr;

    rtr = malloc(sizeof(t_list));
    rtr->data = data;
    rtr->next = 0;
    return (rtr);
}

int    main()
{
    //int data = 500;
    char *data = "Hello";
    char *data2 = "Hello2";
    char *data3 = "Hello3";
    char *data4 = "Hello4";
    t_list *rtr = ft_create_elem(data);
    ft_list_push_front(&rtr, data2);
    ft_list_push_front(&rtr, data3);
    ft_list_push_front(&rtr, data4);

    //printf("%d\n", *(int*)(arr->data));
    printf("%s\n", rtr->data);
}
