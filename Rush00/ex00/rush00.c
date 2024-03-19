/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macamarg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 10:46:14 by macamarg          #+#    #+#             */
/*   Updated: 2024/03/03 09:48:30 by macamarg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar (char c);
/*{
	write(1, &c, 1);
}
*/

void	print_line(int x, char vert_ch, char line_ch)
{
	char	column;

	column = 1;
	while (column <= x)
	{
		if (column == 1 || column == x) 
			ft_putchar (vert_ch);
		else
			ft_putchar (line_ch);
		column++;
	}
}

void	rush(int x, int y)
{
	char	line;

	line = 1;
	if (x > 0 && y > 0)
	{
		while (line <= y)
		{
			if (line == 1 || line == y)
			{
				print_line (x, 'o', '-');
				ft_putchar ('\n');
			}
			else
			{
				print_line (x, '|', 32);
				ft_putchar('\n');
			}
			line++;
		}
	}
}
/*
int	main(void)
{
	rush(0, 0);
	ft_putchar('\n');
	rush(5, 3);
	ft_putchar('\n');
	rush(5, 1);
	ft_putchar('\n');
	rush(1, 5);
	ft_putchar('\n');
	rush(4, 4);
}*/
