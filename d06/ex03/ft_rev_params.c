/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tulenius <tulenius@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 19:38:04 by tulenius          #+#    #+#             */
/*   Updated: 2021/07/14 20:34:00 by tulenius         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_print_parameters(char *str);
void	ft_putchar(char c);

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

int		main(int argc, char **argv)
{
	int i;

	i = 1;
	while (i < argc)
	{
		ft_print_parameters(argv[argc - 1]);
		ft_putchar('\n');
		argc--;
	}
	return (0);
}
