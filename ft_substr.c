/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icunha-t <icunha-t@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 15:33:27 by icunha-t          #+#    #+#             */
/*   Updated: 2024/11/11 09:45:44 by icunha-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*r;
	size_t	s_len;
	size_t	i;
	size_t	j;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if (start >= s_len)
		return (ft_strdup(""));
	if (len > s_len - start)
		len = s_len - start;
	r = (char *)malloc(sizeof(char) * (len + 1));
	if (!r)
		return (NULL);
	i = start;
	j = 0;
	while (i < s_len && j < len)
		r[j++] = s[i++];
	r[j] = '\0';
	return (r);
}
/*
#include <stdio.h>
int	main(void)
{
	char const	*s = "Ola e adeus";
	unsigned int	start;
	size_t	len;
	
	start = 4;
	len = 3;
	printf ("%s\n", ft_substr(s, start, len));
	return (0);
}
*/
