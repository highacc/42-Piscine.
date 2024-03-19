/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ode-sout <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 10:34:23 by ode-sout          #+#    #+#             */
/*   Updated: 2024/03/05 10:58:12 by ode-sout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
int main (void)
{
	int n1;
	int n2;
	int res_div;
	int res_mod;
	
	n1 = 10;
	n2 = 3;	
	ft_div_mod(n1, n2, &res_div, &res_mod);
    	printf("Division Result: %d \n", res_div);
	printf("Modulus Result: %d \n", res_mod);

    return 0;
}
*/
