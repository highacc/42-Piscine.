/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ode-sout <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 09:04:59 by ode-sout          #+#    #+#             */
/*   Updated: 2024/03/07 13:29:35 by ode-sout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((65 <= str[i] && str[i] <= 90) || (97 <= str[i] && str[i] <= 122))
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
    int result = ft_str_is_alpha(myString);

    if (result)
        printf("Code 1, The string contains only alphabetic characters.\n");
    else
        printf("Code 0, The string contains non-alphabetic characters.\n");

    return 0;
}*/
