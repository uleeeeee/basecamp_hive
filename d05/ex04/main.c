/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tulenius <tulenius@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/13 18:43:46 by tulenius          #+#    #+#             */
/*   Updated: 2021/07/13 18:45:21 by tulenius         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int		main()
{
	char src[40] = "This is mayhem666";
    char dest[12];
    ft_strncpy(dest, src, 10);
    return (0);
}
