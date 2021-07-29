/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tulenius <tulenius@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/22 17:09:41 by tulenius          #+#    #+#             */
/*   Updated: 2021/07/22 17:12:10 by tulenius         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdio.h>
#include <stdlib.h>

t_list    *ft_create_elem(void *data)
{
    t_list *rtr;

    rtr = malloc(sizeof(t_list));
    rtr->data = data;
    rtr->next = 0;
    return (rtr);
}
