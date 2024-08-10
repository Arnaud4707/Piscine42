/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amugisha <amugisha6@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/10 19:46:24 by amugisha          #+#    #+#             */
/*   Updated: 2024/08/10 22:13:05 by amugisha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_check(int *check, int *tab, int size)
{
	int	i;
	int	c;

	i = 0;
	*check = 1;
	while (i < size)
	{
		if (tab[i] > tab[i + 1])
		{
			c = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = c;
			*check = 0;
		}
		i++;
	}
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	check;

	check = 0;
	size--;
	while (check != 1)
	{
		ft_check(&check, tab, size);
	}
}
/*
int	main(void)
{
	int	i;
	int	c;
	int	tab[10] = {9, 8, 5, 5, 6, 7, 3, 2, 1, 0};

	i = 0;
	ft_sort_int_tab(tab, 10);
	while (i < 10)
	{
		c = tab[i] + '0';
		write(1, &c, 1);
		i++;
	}
	return (0);
}*/
