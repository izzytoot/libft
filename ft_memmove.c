/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icunha-t <icunha-t@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 17:08:58 by icunha-t          #+#    #+#             */
/*   Updated: 2024/11/11 09:45:44 by icunha-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*tempd;
	unsigned const char	*temps;

	tempd = dest;
	temps = src;
	if (!dest && !src)
		return (NULL);
	if (tempd > temps && tempd < temps + n)
	{
		i = n;
		while (i-- > 0)
			tempd[i] = temps[i];
	}
	else
	{
		i = 0;
		while (i < n)
		{
			tempd[i] = temps[i];
			i++;
		}
	}
	return (dest);
}
/*
#include <string.h>
#include <stdio.h>
int	main(void)
{
	char	src[] = "Vamos testar";
	char	dest[15];
	printf ("%s\n", (char *)ft_memmove(dest, src, 2));
	printf ("%s\n", (char *)memmove(dest, src, 2));
	return (0);
}
*/
