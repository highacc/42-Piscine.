/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ode-sout <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 08:06:58 by ode-sout          #+#    #+#             */
/*   Updated: 2024/03/13 08:16:50 by ode-sout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 32 && str[i] <= 126)
			i++;
		else
			return (0);
	}
	return (1);
}
/*
int main (void)
{
	  char myString[] = ""; 
	  char myString2[] = "1245!#!#%Hello World1235"; 
	  char myString3[] = " ~helloworld"; 
    int result = ft_str_is_printable(myString);
    int result2 = ft_str_is_printable(myString2);
    int result3 = ft_str_is_printable(myString3);

    if (result)
        printf("Code 1, The string contains only printable  characters.\n");
    else
        printf("Code 0, The string contains non-printable characters.\n");
     if (result2)
        printf("Code 1, The string contains only printable characters.\n");
    else
        printf("Code 0, The string contains non-printable characters.\n");
     if (result3)
        printf("Code 1, The string contains only printable characters.\n");
    else
        printf("Code 0, The string contains non-printable characters.\n");

    return 0;
}*/
