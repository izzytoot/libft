/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icunha-t <icunha-t@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 17:48:43 by icunha-t          #+#    #+#             */
/*   Updated: 2024/11/11 09:45:44 by icunha-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s);
	while (i >= 0)
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
		i--;
	}
	return (NULL);
}
/*
#include <string.h>
#include <stdio.h>
int	main(void)
{
	const char	*s = "Here's a test for you";
	int	c = 'e';
	char	*resultmine = ft_strrchr(s, c);
	char	*resultorig = strrchr(s, c);

	if (resultmine)
		printf("Found last '%c' at position %ld\n", c, resultmine - s);
	if (resultorig)
		printf("Found last '%c' at position %ld\n", c, resultorig - s);
	else
		printf("Char '%c' not found", c);
	return (0);
}
*/
