/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amugisha <amugisha6@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 23:42:46 by amugisha          #+#    #+#             */
/*   Updated: 2024/08/13 23:45:08 by amugisha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;
	int	x;

	i = 0;
	x = 1;
	while (str[i])
	{
		if (str[i] < 'a' || str[i] > 'z')
			x = 0;
		i++;
	}
	return (x);
}
