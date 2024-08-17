/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amugisha <amugisha6@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 13:49:05 by amugisha          #+#    #+#             */
/*   Updated: 2024/08/15 15:25:55 by amugisha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*upper_case(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		i++;
	}
	return (str);
}

int	is_alpha(char str)
{
	int	x;

	x = 0;
	if ((str >= 'a' && str <= 'z') || (str >= 'A' && str <= 'Z'))
		x = 1;
	return (x);
}

int	is_number(char str)
{
	int	x;

	x = 0;
	if (str >= '0' && str <= '9')
		x = 1;
	return (x);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	upper_case(str);
	while (str[i])
	{
		i++;
		if (is_alpha(str[i]))
		{
			if (is_alpha(str[i - 1]) || is_number(str[i - 1]))
				str[i] += 32;
		}
	}
	return (str);
}
/*
int	main(void)
{
	char	str[] = " salut, comment tu vas ?
       	42mots quarante-deux; cinquante+et+un";

	printf("%s\n", ft_strcapitalize(str));
	return (0);
}*/
