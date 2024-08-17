/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amugisha <amugisha6@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 20:35:39 by amugisha          #+#    #+#             */
/*   Updated: 2024/08/17 20:12:28 by amugisha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	rush(int x, int y);

int	putnbr(char *str)
{
	int	i;
	int	result;

	i = 0;
	result = 0;
	while (str[i])
	{
		result *= 10;
		result += str[i] - 48;
		i++;
	}
	return (result);
}

int	main(int arg, char **argv)
{
	int	x;
	int	y;

	if (arg < 2)
		write(1, "Erreur argument x et y manquants\n", 33);
	else if (arg < 3)
		write(1, "Erreur argument y manquant\n", 27);
	else
	{
		x = putnbr(argv[1]);
		y = putnbr(argv[2]);
		rush(x, y);
	}
	return (0);
}
/*
int	main(void)
{
	rush(5, 3);
	return (0);
}*/
