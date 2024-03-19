/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ode-sout <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 07:50:07 by ode-sout          #+#    #+#             */
/*   Updated: 2024/03/07 08:49:30 by ode-sout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcpy(char *dest, char *arc)
{
	int	i;

	i = 0;
	if (dest == NULL)
		return (NULL);
	while (arc[i] != '\0')
	{
		dest[i] = arc[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
 * While Arc in position i is not NULL (the end of the array) 
 dest in positio i i equal to arc in position i.
*/
/*
int main(void)
{
	char src[10] = "copy this";
	
	char dest[100];
	char *dest_ptr = ft_strcpy(dest, src);
	
//	src[10] = "copy this";

	printf("	src: %s\n", src);
	printf("	dest: %s\n", dest);
	printf("dest_ptr: %s\n", dest_ptr);

	printf("	dest: %p\n", dest);
	printf("dest_ptr: %p\n", dest);
}
*/
