/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ode-sout <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 14:55:19 by ode-sout          #+#    #+#             */
/*   Updated: 2024/03/16 14:55:35 by ode-sout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	potencia(int casas)
{
	int	resposta;

	resposta = 1;
	while (casas > 0)
	{
		resposta = resposta * 10;
		casas--;
	}
	return (resposta);
}

int	qantascasas(int casas, int nb)
{
	while ((nb / 10) >= 1)
	{
		nb = nb / 10;
		casas++;
	}
	return (casas);
}

int	negativo(int nb)
{
	if (nb < 0)
	{
		write (1, "-", 1);
		if (nb == -2147483648)
		{
			write (1, "2", 1);
			nb = 147483648;
		}
		else
		{
			nb = -1 * nb;
		}
	}
	return (nb);
}

void	ft_putnbr(int nb)
{
	char	ca;
	int		casas;

	nb = negativo(nb);
	casas = qantascasas(0, nb);
	while (casas > 0)
	{
		ca = (nb / potencia(casas));
		nb = nb - (ca * potencia(casas));
		ca = ca + 48;
		write(1, &ca, 1);
		ca = 0;
		casas--;
	}
	ca = (nb + 48);
	write(1, &ca, 1);
}
/*
int main(void)
{
    ft_putnbr(2147483648);
}*/
