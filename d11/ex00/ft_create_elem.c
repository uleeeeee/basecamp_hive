/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tulenius <tulenius@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/21 10:53:18 by tulenius          #+#    #+#             */
/*   Updated: 2021/07/21 10:55:31 by tulenius         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

t_list	*ft_create_elem(void *data)
{
	t_list *ptr;

	if (!(ptr = malloc(sizeof(t_list))))
		return (NULL);
	ptr->data = data;
	ptr->next = NULL;
	return (ptr);
}
