/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icunha-t <icunha-t@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 16:36:06 by icunha-t          #+#    #+#             */
/*   Updated: 2024/11/11 09:45:44 by icunha-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
		i++;
	}
	if ((char)c == '\0')
		return ((char *)&s[i]);
	return (0);
}
/*
#include <string.h>
#include <stdio.h>
int	main(void)
{
	const char	*s = "Here's a test for you";
	int	c = 'e';
	char	*resultmine = ft_strchr(s, c);
	char	*resultorig = strchr(s, c);
	
	if (resultmine)
		printf("%s\n", resultmine);
	if (resultmine)
		printf("Found '%c' at position %ld\n", c, resultmine - s);
	if (resultorig)
		printf("Found '%c' at position %ld\n", c, resultorig - s);
	else
		printf("Char '%c' not found\n", c);
	return (0);
}
*/