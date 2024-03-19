/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macamarg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 10:46:14 by macamarg          #+#    #+#             */
/*   Updated: 2024/03/03 09:42:32 by macamarg         ###   ########.fr       */
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
	int	column;

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
	int	line;

	line = 1;
	if (x > 0 && y > 0)
	{
		while (line <= y)
		{
			if (line == 1)
			{
				print_line (x, 'A', 'B');
				ft_putchar ('\n');
			}
			else if (line == y)
			{
				print_line (x, 'C', 'B');
				ft_putchar ('\n');
			}
			else
			{
				print_line (x, 'B', 32);
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
	rush(5, 1);
	rush(1, 5);
	rush(5, 3);
	rush(4,4);
}*/
