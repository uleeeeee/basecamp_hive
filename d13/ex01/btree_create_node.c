/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_create_node.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tulenius <tulenius@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/23 15:26:45 by tulenius          #+#    #+#             */
/*   Updated: 2021/07/23 16:44:38 by tulenius         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_btree.h"
#include <stdio.h>

t_btree	*btree_create_node(void *item)
{
	t_btree *ptr;

	if (!(ptr = malloc(sizeof(t_btree))))
		return (NULL);
	ptr->left = NULL;
	ptr->right = NULL;
	ptr->item = item;
	return (ptr);
}
