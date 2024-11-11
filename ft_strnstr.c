/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icunha-t <icunha-t@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 10:36:34 by icunha-t          #+#    #+#             */
/*   Updated: 2024/11/11 09:45:44 by icunha-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	n_len;

	i = 0;
	n_len = ft_strlen(little);
	if (n_len == 0)
		return ((char *)big);
	while (big[i] && i < len)
	{
		j = 0;
		while (big[i + j] && little[j]
			&& big[i + j] == little[j] && i + j < len)
			j++;
		if (j == n_len)
			return ((char *)big + i);
		i++;
	}
	return (NULL);
}
/*
#include <bsd/string.h> 
#include <stdio.h>
int	main(void)
{
	char	big[] = "Hello, it's me";
	char	little[] = "it's me";
	printf("%s\n", ft_strnstr(big, little, 14));
	printf("%s\n", strnstr(big, little, 14));
	return (0);
}
*/
