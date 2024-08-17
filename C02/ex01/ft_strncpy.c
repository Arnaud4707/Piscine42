/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amugisha <amugisha6@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/10 23:06:18 by amugisha          #+#    #+#             */
/*   Updated: 2024/08/14 00:25:50 by amugisha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

unsigned int	len(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;
	unsigned int	k;

	i = 0;
	k = len(src);
	while (i < n)
	{
		if (i <= k)
			dest[i] = src[i];
		else
			dest[i] = '\0';
		i++;
	}
	return (dest);
}
/*
int	main(void)
{
	int		i;
	char	dest[50] = "0123456789";
	char	test[50] = "0123456789";

	printf("dest => %s len => %d\n", ft_strncpy(dest, "bonjours", 10),
       	len(ft_strncpy(dest, "bonjours", 10)));
	printf("test => %s len => %d\n", strncpy(test, "bonjours", 10),
       	len(strncpy(test, "bonjours", 10)));
}*/
