/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ode-sout <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 13:31:04 by ode-sout          #+#    #+#             */
/*   Updated: 2024/03/07 13:34:18 by ode-sout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((48 <= str[i]) && (str[i] <= 57))
			i++;
		else
			return (0);
	}
	return (1);
}
/*
int main (void)
{
	  char myString[] = "%Hello World"; 
	  char myString2[] = "1245!#!#%Hello World1235"; 
	  char myString3[] = "1234567890"; 
    int result = ft_str_is_numeric(myString);
    int result2 = ft_str_is_numeric(myString2);
    int result3 = ft_str_is_numeric(myString3);

    if (result)
        printf("Code 1, The string contains only alphabetic characters.\n");
    else
        printf("Code 0, The string contains non-alphabetic characters.\n");
     if (result2)
        printf("Code 1, The string contains only alphabetic characters.\n");
    else
        printf("Code 0, The string contains non-alphabetic characters.\n");
     if (result3)
        printf("Code 1, The string contains only alphabetic characters.\n");
    else
        printf("Code 0, The string contains non-alphabetic characters.\n");

    return 0;
}*/
