/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amugisha <amugisha6@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 23:38:38 by amugisha          #+#    #+#             */
/*   Updated: 2024/08/13 23:41:41 by amugisha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;
	int	x;

	i = 0;
	x = 1;
	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
			x = 0;
		i++;
	}
	return (x);
}
