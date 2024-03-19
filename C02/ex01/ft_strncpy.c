/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ode-sout <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 09:18:20 by ode-sout          #+#    #+#             */
/*   Updated: 2024/03/07 10:06:33 by ode-sout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (dest == NULL || src == NULL || n == 0)
		return (dest);
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
/*
int main(void)
{
	char string[] = "abcdef";
	char buffer[10];
	int i;
	
	i = 0;	
	while (i < 10)
	{
		buffer[i] = '#';
		i++;
	}

	ft_strncpy(buffer, string, 3);

	printf("buffer: %s\n", buffer);
	
	i = 0;

	while(i < 10)
	{
		if (buffer[i] == '\0')
		{
			printf("buffer[%d] = \\0\n", i);
		}
		else
		{
			printf("buffer[%d] = %c\n", i, buffer[i]);
		}
		i++;
	}
}*/
