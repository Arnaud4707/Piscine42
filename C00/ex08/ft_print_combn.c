/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amugisha <amugisha6@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/09 14:26:05 by amugisha          #+#    #+#             */
/*   Updated: 2024/08/09 22:30:13 by amugisha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	compteur(int n, int check)
{
	int	i;

	if (check == 0)
	{
		i = 0;
		while (n > 0)
		{
			n = n / 10;
			i++;
		}
	}
	else
	{
		i = 1;
		while (n > 0)
		{
			i *= 10;
			n--;
		}
	}
	return (i);
}

int	digit(int k, int i)
{
	while (k > 1)
	{
		i = i / 10;
		k--;
	}
	return (i % 10);
}

int	verif(char *c)
{
	int	j;
	int	i;
	int	check;

	j = 0;
	while (c[j])
		j++;
	if (j < 1)
		return (1);
	else
	{
		i = 0;
		check = 1;
		while (j > 1)
		{
			if (c[i] >= c[i + 1])
				check = 0;
			i++;
			j--;
		}
		if (check == 1)
			return (1);
		else
			return (0);
	}
}

void	print(int *x, int n, char *c)
{
	while (x[2] < n)
	{
		c[x[1]] = '0';
		n--;
		x[1]++;
	}
	while (x[2] > 0)
	{
		c[x[1]] = digit(x[2], x[0]) + '0';
		x[1]++;
		x[2]--;
	}
	c[x[1]] = '\0';
	x[1] = 0;
	if (verif(c) == 1)
	{
		while (c[x[1]])
		{
			write(1, &c[x[1]], 1);
			x[1]++;
		}
		if (c[0] != (10 - n + '0'))
			write(1, ", ", 2);
	}
}

void	ft_print_combn(int n)
{
	int		x[3];
	char	c[11];

	x[0] = 0;
	while (x[0] < compteur(n, 1))
	{
		x[1] = 0;
		x[2] = compteur(x[0], 0);
		print(x, n, c);
		x[0]++;
	}
}
/*
int	main(int arg, char **argv)
{
	int	n;

	if (arg < 2)
	{
		write(1, "argument manquant", 17);
	}
	else
	{
		n = *argv[1] - '0';
		ft_print_combn(n);
		return (0);
	}
}*/
/*x0 = i; x1 = j; x2 = k*/
