/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amugisha <amugisha6@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 22:04:42 by amugisha          #+#    #+#             */
/*   Updated: 2024/08/16 20:20:50 by amugisha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

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

int	main(void)
{
	void	*a = "Bon";
	unsigned long	b = (unsigned long) a;
	size_t		i;
	char	adr[17];
	char	*hexa;

	i = -1;
	adr[16] = 0;
	hexa = "0123456789abcdef";
	printf("%p\n", &a);
	while (++i <= 16)
	{
		if (b > 0)
		{
			adr[15 - i] = hexa[b % 16];
			b /= 16;
		}
		else
		{
			adr[15 - i] = '0';
		}
	}
	write(1, adr, 16);
	write(1, ": ", 2);
	return (0);
}
