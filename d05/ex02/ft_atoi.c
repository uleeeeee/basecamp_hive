/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tulenius <tulenius@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/12 13:15:35 by tulenius          #+#    #+#             */
/*   Updated: 2021/07/13 09:03:20 by tulenius         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int i;
	int negative;
	int results;

	negative = 1;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\r' || str[i] == 'n' ||
	str[i] == '\f' || str[i] == '\v')
	{
		i++;
	}
	if (str[i] == '-')
	{
		negative *= (-1);
	}
	if (str[i] == '-' || str[i] == '+')
	{
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		results = 10 * results + (str[i] - '0');
		i++;
	}
	return (results *= negative);
}
