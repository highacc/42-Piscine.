/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macamarg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 10:46:14 by macamarg          #+#    #+#             */
/*   Updated: 2024/03/03 09:41:22 by macamarg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);
/*{
	write(1, &c, 1);
}*/

/*recive the line paramiters and print as suposed 
 * - number of columns, left vertice, line, right vertice*/
void	print_line(int x, char l_vert_ch, char line_ch, char r_vert_ch)
{
	int	column;

	column = 1;
	while (column <= x)
	{
		if (column == 1)
			ft_putchar (l_vert_ch);
		else if (column == x)
			ft_putchar (r_vert_ch);
		else
			ft_putchar (line_ch);
		column++;
	}
}

void	rush(int x, int y)
{
	int	line;

	line = 1;
	if (x > 0 && y > 0)
	{
		while (line <= y)
		{
			if (line == 1 || line == y)
			{
				print_line (x, 'A', 'B', 'C');
				ft_putchar ('\n');
			}
			else
			{
				print_line (x, 'B', 32, 'B');
				ft_putchar('\n');
			}
			line++;
		}
	}
}
/*
int	main(void)
{
	rush(1, 0);
	rush(5,3);
	rush(5,1);
	rush(1,5);
	rush(4,4);
}*/
