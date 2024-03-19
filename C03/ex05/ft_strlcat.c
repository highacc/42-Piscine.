/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ode-sout <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 17:48:45 by ode-sout          #+#    #+#             */
/*   Updated: 2024/03/13 17:49:47 by ode-sout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	len;
	unsigned int	dest_len;

	len = 0;
	dest_len = 0;
	while (*(dest + dest_len) && dest_len < size)
		dest_len++;
	while (*(src + len) && dest_len + len + 1 < size)
	{
		*(dest + dest_len + len) = *(src + len);
		len++;
	}
	if (dest_len + len < size)
		*(dest + dest_len + len) = '\0';
	while (*(src + len))
		len++;
	return (dest_len + len);
}
/*
int	main()
{
	char	dest[20] = "Hello, ";
	char	src[] = "world!";
	unsigned int result;

	printf("Destino antes da concatenação: %s\n", dest);
	result = ft_strlcat(dest, src, sizeof(dest));
	printf("Destino após a concatenação: %s\n", dest);
	printf("Tamanho total após a concatenação: %u\n", result);

	return (0);
}*/
