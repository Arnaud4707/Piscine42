/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amugisha <amugisha6@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 17:24:17 by amugisha          #+#    #+#             */
/*   Updated: 2024/08/24 14:58:59 by amugisha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	putstr(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
}

void	print(char str)
{
	int		i;
	char	c[17];
	char	x[2];

	i = 0;
	x[0] = str / 16 + '0';
	x[1] = str % 16;
	write(1, "\\", 1);
	write(1, &x[0], 1);
	putstr(c, "0123456789abcdef");
	while (c[i])
	{
		if (i == x[1])
			write(1, &c[i], 1);
		i++;
	}
}

void	ft_putstr_non_printable(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		if (str[i] < 32 || str[i] > 126)
		{
			print(str[i]);
		}
		else
			write(1, &str[i], 1);
		i++;
	}
}
/*
int	main(void)
{
	ft_putstr_non_printable("Coucou\ntu vas bien ?");
	return (0);
}*/
