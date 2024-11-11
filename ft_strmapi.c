/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icunha-t <icunha-t@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 10:40:10 by icunha-t          #+#    #+#             */
/*   Updated: 2024/11/11 09:45:44 by icunha-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*new_str;
	size_t	i;

	if (!s || !f)
		return (NULL);
	new_str = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!new_str)
		return (NULL);
	i = 0;
	while (s[i])
	{
		new_str[i] = f(i, s[i]);
		i++;
	}
	new_str[i] = '\0';
	return (new_str);
}
/*
#include <stdio.h>
char	my_f(unsigned int i, char c)
{
	char	new_c;

	new_c = c + 1;
	return (new_c);
}

int	main(void)
{
	unsigned int	i;
	char	*str;
	char	*r;

	str = "abc";
	i = 0;
	while (str[i])
	{
		printf ("%c is now %c.\n", str[i], my_f(i, str[i]));
		i++;
	}
	r = ft_strmapi(str, my_f);
	printf ("The final string is %s\n", r);
	free (r);
	return (0);
}
*/
