/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tulenius <tulenius@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 18:05:44 by tulenius          #+#    #+#             */
/*   Updated: 2021/07/15 08:10:17 by tulenius         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_print_parameters(char *str);
void	ft_putchar(char c);

int		main(int argc, char **argv)
{
	int i;

	i = 1;
	while (i < argc)
	{
		ft_print_parameters(argv[i]);
		ft_putchar('\n');
		i++;
	}
	return (0);
}
void	ft_print_parameters(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}
