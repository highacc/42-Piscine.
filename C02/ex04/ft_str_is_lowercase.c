/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ode-sout <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 07:44:54 by ode-sout          #+#    #+#             */
/*   Updated: 2024/03/13 08:01:30 by ode-sout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((97 <= str[i]) && (str[i] <= 122))
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
	  char myString3[] = "helloworld"; 
    int result = ft_str_is_lowercase(myString);
    int result2 = ft_str_is_lowercase(myString2);
    int result3 = ft_str_is_lowercase(myString3);

    if (result)
        printf("Code 1, The string contains only lowercase  characters.\n");
    else
        printf("Code 0, The string contains non-lowercase characters.\n");
     if (result2)
        printf("Code 1, The string contains only lowercase characters.\n");
    else
        printf("Code 0, The string contains non-lowercase characters.\n");
     if (result3)
        printf("Code 1, The string contains only lowercase characters.\n");
    else
        printf("Code 0, The string contains non-lowercase characters.\n");

    return 0;
}*/
