/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ode-sout <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 11:06:53 by ode-sout          #+#    #+#             */
/*   Updated: 2024/03/05 11:18:05 by ode-sout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	i;

	i = *a; 
	*a = *a / *b; 
	*b = i % *b;
}
/*
int	main(void)
{
    int x = 10;
    int y = 3;

    ft_ultimate_div_mod(&x, &y);
    printf("Result of division: %d\n", x);
    printf("Result of modulo: %d\n", y);
    return 0;
}
*/
