/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amugisha <amugisha6@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 21:29:00 by amugisha          #+#    #+#             */
/*   Updated: 2024/08/17 18:36:29 by amugisha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	main_line(int i, int x, char *form)
{
	if (i == 0 || i == (x - 1))
		write(1, &form[0], 1);
	if (i > 0 && i < (x - 1))
		write(1, &form[1], 1);
}

void	mid_line(int i, int x, char *form)
{
	if (i == 0 || i == (x - 1))
		write(1, &form[2], 1);
	if (i > 0 && i < (x - 1))
		write(1, " ", 1);
}

void	ft_putchar(int i, int j, int x, int y)
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
