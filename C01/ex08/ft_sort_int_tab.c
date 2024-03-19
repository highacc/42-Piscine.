/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ode-sout <ode-sout@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 14:17:35 by ode-sout          #+#    #+#             */
/*   Updated: 2024/03/12 14:17:35 by ode-sout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	swap(int *a, int *b)
{
	int	i;

	i = *a;
	*a = *b;
	*b = i;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;

	i = 1;
	while (i < size)
	{
		j = i;
		while (j > 0 && *(tab + j - 1) > *(tab + j))
		{
			swap(tab + j, tab + j - 1);
			j--;
		}
		i++;
	}
}
/*
int main(void)
{
    int i;
    int j;
    int v[10] = { 105, 20, 35, 4, 55, 6, 17, 8, 19, 100};
    
    for (i = 0; i < sizeof(v) / sizeof(v[0]); ++i) {
        printf("%d ", v[i]);
    }
    ft_sort_int_tab(v, 10);

   for (j = 0; j < sizeof(v) / sizeof(v[0]); ++j) {
        printf("%d ", v[j]);
    }
}*/
