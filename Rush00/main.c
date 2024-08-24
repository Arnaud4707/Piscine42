/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amugisha <amugisha6@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 20:35:39 by amugisha          #+#    #+#             */
/*   Updated: 2024/08/19 20:41:13 by amugisha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	rush(int x, int y);

int	ft_atoi(char *str)
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

int	checknbr(char *nbr)
{
	int	i;

	i = 0;
	while (nbr[i])
	{
		if ((nbr[i] - 48) > 9 || (nbr[i] - 48) < 0)
			return (-1);
		i++;
	}
	return (0);
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
		if (checknbr(argv[1]) != 0 || checknbr(argv[2]) != 0)
			write(1, "Erreur veuillez inserer que des entiers positifs\n", 49);
		else
		{
			x = ft_atoi(argv[1]);
			y = ft_atoi(argv[2]);
			rush(x, y);
		}
	}
	return (0);
}
/*
int	main(void)
{
	rush(5, 3);
	return (0);
}*/
