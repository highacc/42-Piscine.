/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ode-sout <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 09:14:54 by ode-sout          #+#    #+#             */
/*   Updated: 2024/03/13 09:20:07 by ode-sout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((97 <= str[i]) && (str[i] <= 122))
		{
			str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}
/*
int main (void)
{
	char	*str;

	str = "caps";
	if (ft_strupcase(str))
		printf("display: %s", str);
	return (0);
}*/
