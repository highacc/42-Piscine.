/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macamarg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 10:46:14 by macamarg          #+#    #+#             */
/*   Updated: 2024/03/02 14:15:41 by macamarg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	g_line;
int	g_column;

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
/*
void print_line (int x, char vert_ch, char line_ch)
{
	g_column = 1;
	while (g_column <= x)
	{
		if (g_column == 1 || g_column == x)//prints the vertice 
			ft_putchar (vert_ch);
		else
			ft_putchar (line_ch);//prints the body of the line
		g_column++;
	}
}
*/
/*
void	rush (int x, int y)
{
	g_line = 1;
	g_column = 1;

	if (y == 0)
		ft_putchar ('A');
	else
		while (g_line <= y)
		{
			if (g_line == 1)//test 1st line
			{
				print_line (y, 'A', 'B');
				ft_putchar ('\n');
			}
			else if  (g_line == y)//test last line
				print_line (y, 'C', 'B');
			else//body of the square
			{
				print_line (y,'B', 32);
				ft_putchar('\n');
			}
			g_line++;
		}
}

int	main(void)
{
	rush(1, 0);
	ft_putchar('\n');
	rush(5,3);
	ft_putchar('\n');
	rush(5,0);
	ft_putchar('\n');
	rush(1,5);
	ft_putchar('\n');
	rush(4,4);
}*/
