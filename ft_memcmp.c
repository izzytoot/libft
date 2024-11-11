/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icunha-t <icunha-t@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 10:13:31 by icunha-t          #+#    #+#             */
/*   Updated: 2024/11/11 09:45:44 by icunha-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	unsigned char		*temps1;
	unsigned const char	*temps2;

	i = 0;
	temps1 = (unsigned char *) s1;
	temps2 = (unsigned char *) s2;
	if (i == n)
		return (0);
	while (i < n - 1)
	{
		if (temps1[i] != temps2[i])
			return (temps1[i] - temps2[i]);
		i++;
	}
	return (temps1[i] - temps2[i]);
}
/*
#include <string.h>
#include <stdio.h>
int	main(void)
{
	char	s1[] = "abcd";
	char	s2[] = "abtd";
	printf ("%i\n", ft_memcmp(s1, s2, 10));
	printf ("%i\n", memcmp(s1, s2, 10));
	return (0);
}
*/
