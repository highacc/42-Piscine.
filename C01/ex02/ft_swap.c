/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ode-sout <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 17:47:39 by ode-sout          #+#    #+#             */
/*   Updated: 2024/03/04 17:52:51 by ode-sout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	i;

	i = *a;
	*a = *b;
	*b = i;
}
// Store the value pointed to by a
// Assign the value pointed to by b to a
// Assign the stored value to b
/*
int main(void)
{
    int num1 = 42;
    int num2 = -42;

    ft_swap(&num1, &num2); // Pass the addresses of num1 and num2
    printf("%d", num1); // Print the updated value of num1
    return 0;
}
*/
