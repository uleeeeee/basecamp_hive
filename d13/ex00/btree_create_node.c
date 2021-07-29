/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_create_node.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tulenius <tulenius@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/23 15:26:45 by tulenius          #+#    #+#             */
/*   Updated: 2021/07/24 08:32:53 by tulenius         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"
#include <stdlib.h>

t_btree	*btree_create_node(void *item)
{
	t_btree *ptr;

	if (!(ptr = malloc(sizeof(t_btree))))
		return ;
	ptr->left = NULL;
	ptr->right = NULL;
	ptr->item = item;
	return (ptr);
}
