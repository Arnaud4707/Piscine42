/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amugisha <amugisha6@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 20:16:25 by amugisha          #+#    #+#             */
/*   Updated: 2024/08/09 14:34:23 by amugisha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	len(int nb)
{
	int	i;

	i = 0;
	while (nb > 0)
	{
		nb = nb / 10;
		i++;
	}
	return (i);
}

int	calcule(int i, int nb)
{
	while (i > 1)
	{
		nb = nb / 10;
		i--;
	}
	return (nb % 10);
}

void	signe(int nb)
{
	int		i;
	char	c;

	if (nb < 0)
	{
		write(1, "-", 1);
		nb = nb * -1;
	}
	i = len(nb);
	while (i > 0)
	{
		c = calcule(i, nb) + '0';
		write(1, &c, 1);
		i--;
	}
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
	}
	else if (nb == 0)
	{
		write(1, "0", 1);
	}
	else
		signe(nb);
}
/*
int	main(void)
{
	ft_putnbr(2147483647);
	return (0);
}*/
