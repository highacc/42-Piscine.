/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ode-sout <ode-sout@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 11:29:29 by ode-sout          #+#    #+#             */
/*   Updated: 2024/03/12 11:29:29 by ode-sout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	element;

	i = 0;
	while (i < size / 2)
	{
		element = tab[i];
		tab[i] = tab[size - i - 1];
		tab[size - i - 1] = element;
		i++;
	}
}
/*
int main(void)
{
    int i;
    int j;
    int v[10] = { 10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    
    for (i = 0; i < sizeof(v) / sizeof(v[0]); ++i) {
        printf("%d ", v[i]);
    }
    ft_rev_int_tab(v, 10);

   for (j = 0; j < sizeof(v) / sizeof(v[0]); ++j) {
        printf("%d ", v[j]);
    }
}
*/
