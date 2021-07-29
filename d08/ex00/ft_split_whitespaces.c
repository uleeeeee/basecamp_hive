/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tulenius <tulenius@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/16 12:39:58 by tulenius          #+#    #+#             */
/*   Updated: 2021/07/16 14:37:27 by tulenius         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	create_array(char *str, int stopper);

char **ft_split_whitespaces(char *str)
{
	int i;

	i = 0;

	while (str[i] != 0)
	{
		if (!((str[i] >= 'a' && str[i] <= 'z') || 
		(str[i] >= 'A' || str[i] <= 'A')))
		{
			create_array(*str, i);
		}
		i++;
	}
}

void create_array(char *str, int stopper)
{
	return (str);
}

char **ft_split_whitespaces(char *str);

int		main()
{
	int *ptr;
	int **pptr;
	
	char string[] = "test1 test2 test3";
	
	ft_split_whitespaces(string);
	

}