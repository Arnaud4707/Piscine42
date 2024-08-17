/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amugisha <amugisha6@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 20:38:48 by amugisha          #+#    #+#             */
/*   Updated: 2024/08/17 21:50:00 by amugisha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	main_line(int i, int x, char *form)
{
	if (i == 0 || i == (x - 1))
		ft_putchar(form[0]);
	if (i > 0 && i < (x - 1))
		ft_putchar(form[1]);
}

void	mid_line(int i, int x, char *form)
{
	if (i == 0 || i == (x - 1))
		ft_putchar(form[2]);
	if (i > 0 && i < (x - 1))
		ft_putchar(' ');
}

void	print(int i, int j, int x, int y)
{
	char	form[3];

	form[0] = 'o';
	form[1] = '-';
	form[2] = '|';
	if (j == 0 || j == (y - 1))
		main_line(i, x, form);
	else if (j > 0 && j < (y - 1))
		mid_line(i, x, form);
}

void	rush(int x, int y)
{
	int	i;
	int	j;

	j = 0;
	if (x < 120)
	{
		while (j < y)
		{
			i = 0;
			while (i < x)
			{
				print(i, j, x, y);
				i++;
			}
			ft_putchar('\n');
			j++;
		}
	}
	else
		write(1, "Erreur x est trop grand\n", 24);
}
