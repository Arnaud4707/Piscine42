/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amugisha <amugisha6@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 20:38:48 by amugisha          #+#    #+#             */
/*   Updated: 2024/08/17 20:20:03 by amugisha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(int i, int j, int x, int y);

int	verif(int x)
{
	if (x > 120)
	{
		write(1, "Erreur x est trop grand\n", 24);
		return (0);
	}
	else
		return (1);
}

void	rush(int x, int y)
{
	int	i;
	int	j;

	j = 0;
	if (verif(x) == 1)
	{
		while (j < y)
		{
			i = 0;
			while (i < x)
			{
				ft_putchar(i, j, x, y);
				i++;
			}
			write(1, "\n", 1);
			j++;
		}
	}
}
