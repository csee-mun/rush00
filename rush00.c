/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csee-mun <csee-mun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 20:03:51 by csee-mun          #+#    #+#             */
/*   Updated: 2022/08/20 20:04:21 by csee-mun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
void	check_print(int i, int j, int x, int y);

void	rush(int x, int y)
{
	int		i;
	int		j;
	char	nl;

	nl = '\n';
	i = 0;
	while (i < y)
	{
		j = 0;
		while (j < x)
		{
			check_print(i, j, x, y);
			j++;
		}
		ft_putchar(nl);
		i++;
	}
}

void	check_print(int i, int j, int x, int y)
{
	if ((i == 0 && j == 0) || (i == y - 1 && j == 0))
	{
		ft_putchar('o');
	}
	else if ((i == 0 && j == x - 1) || (i == y - 1 && j == x - 1))
	{
		ft_putchar('o');
	}
	else if (i == 0 || i == y - 1)
	{
		ft_putchar('-');
	}
	else if (i == 0 || j == 0 || i == y - 1 || j == x - 1)
	{
		ft_putchar('|');
	}
	else
	{
		ft_putchar(' ');
	}
}
