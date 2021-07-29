/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tulenius <tulenius@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/20 19:37:56 by tulenius          #+#    #+#             */
/*   Updated: 2021/07/21 18:50:00 by tulenius         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIST_H
# define FT_LIST_H
# include <stdlib.h>

typedef struct		t_list
{
	struct t_list	*next;
	void			*data;
}					t_list;
t_list				*ft_create_elem(void *data);
void ft_list_push_back(t_list **begin_list, void *data);
#endif
