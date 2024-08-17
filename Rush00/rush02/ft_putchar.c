/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amugisha <amugisha6@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 18:10:04 by amugisha          #+#    #+#             */
/*   Updated: 2024/08/17 19:50:05 by amugisha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	first_line(int i, int x, char *form)
{
	if (i == 0 || i == (x - 1))
		write(1, &form[0], 1);
	else
		write(1, &form[2], 1);
}

void	mid_line(int i, int x, char *form)
{
	if (i == 0 || i == (x - 1))
		write(1, &form[2], 1);
	else
		write(1, " ", 1);
}

void	last_line(int i, int x, char *form)
{
	if (i == 0 || i == (x - 1))
		write(1, &form[1], 1);
	else
		write(1, &form[2], 1);
}

void	ft_putchar(int i, int j, int x, int y)
{
	char	form[3];

	form[0] = 'A';
	form[1] = 'C';
	form[2] = 'B';
	if (j == 0)
		first_line(i, x, form);
	else if (j == (y - 1))
		last_line(i, x, form);
	else
		mid_line(i, x, form);
}
