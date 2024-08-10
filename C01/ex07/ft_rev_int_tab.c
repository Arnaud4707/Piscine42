/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amugisha <amugisha6@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/10 19:25:15 by amugisha          #+#    #+#             */
/*   Updated: 2024/08/10 22:25:11 by amugisha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	c;

	i = 0;
	while (i < size)
	{
		size--;
		c = tab[i];
		tab[i] = tab[size];
		tab[size] = c;
		i++;
	}
}
/*
int	main(void)
{
	int	i;
	int	c;
	int	tab[8] = {0, 1, 2, 3, 4, 5, 6, 7};

	ft_rev_int_tab(tab, 8);
	while (i < 8)
	{
		c = tab[i] + '0';
		write(1, &c, 1);
		i++;
	}
	return (0);
}*/
