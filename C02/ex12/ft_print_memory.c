/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amugisha <amugisha6@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 22:04:42 by amugisha          #+#    #+#             */
/*   Updated: 2024/08/24 14:57:34 by amugisha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	print_text(void *text, unsigned int size)
{
	unsigned int	i;
	char			*contenu;

	contenu = (char *) text;
	i = -1;
	while (++i < size)
	{
		if (contenu[i] < ' ' || contenu[i] > '~')
		{
			write(1, ".", 1);
		}
		else
			write(1, &contenu[i], 1);
	}
}

void	print_hexa(char contenu)
{
	char	*base_hexa;
	char	c;

	base_hexa = "0123456789abcdef";
	c = (char) contenu;
	write(1, &base_hexa[c / 16], 1);
	write(1, &base_hexa[c % 16], 1);
}

void	print_addr(unsigned long addrlong)
{
	int		i;
	char	adr[17];
	char	*base_hexa;

	i = -1;
	adr[16] = 0;
	base_hexa = "0123456789abcdef";
	while (++i <= 16)
	{
		if (addrlong > 0)
		{
			adr[15 - i] = base_hexa[addrlong % 16];
			addrlong /= 16;
		}
		else
		{
			adr[15 - i] = '0';
		}
	}
	write(1, adr, 16);
	write(1, ": ", 2);
}

void	print_line(void *addr, unsigned int size)
{
	unsigned int		i;
	char				*contenu;

	contenu = (char *) addr;
	i = -1;
	print_addr((unsigned long) addr);
	while (++i < 16)
	{
		if (i < size)
			print_hexa(contenu[i]);
		else
			write(1, "  ", 2);
		if (i % 2 == 1)
			write(1, " ", 1);
	}
	print_text(addr, size);
	write(1, "\n", 1);
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while (i++ < size / 16)
		print_line(addr + 16 * (i - 1), 16);
	if (size % 16 != 0)
		print_line(addr + 16 * (i - 1), size % 16);
	return (addr);
}
/*
int	main(void)
{
	void	*tab = "Bonjours\t tous\0 le ~\nmonde\0 ";

	ft_print_memory(tab, 28);
	return (0);
}*/
