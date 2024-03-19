/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ode-sout <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 08:02:26 by ode-sout          #+#    #+#             */
/*   Updated: 2024/03/13 08:06:08 by ode-sout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (65 <= str[i] && str[i] <= 90)
			i++;
		else
			return (0);
	}
	return (1);
}
/*
int main (void)
{
	  char myString[] = "Hello World"; 
	  char myString2[] = "1245!#!#%Hello World1235"; 
	  char myString3[] = "HELLOWORLD"; 
    int result = ft_str_is_uppercase(myString);
    int result2 = ft_str_is_uppercase(myString2);
    int result3 = ft_str_is_uppercase(myString3);

    if (result)
        printf("Code 1, The string contains only uppercase  characters.\n");
    else
        printf("Code 0, The string contains non-uppercase characters.\n");
     if (result2)
        printf("Code 1, The string contains only uppercase characters.\n");
    else
        printf("Code 0, The string contains non-uppercase characters.\n");
     if (result3)
        printf("Code 1, The string contains only uppercase characters.\n");
    else
        printf("Code 0, The string contains non-uppercase characters.\n");

    return 0;
}*/
