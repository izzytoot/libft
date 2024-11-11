/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icunha-t <icunha-t@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 18:06:49 by icunha-t          #+#    #+#             */
/*   Updated: 2024/11/11 09:45:44 by icunha-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*new_string;
	size_t	i;
	size_t	j;

	if (!s1)
		return (NULL);
	if (!set)
		return (ft_strdup(s1));
	i = 0;
	j = (ft_strlen(s1) - 1);
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;
	while (s1[i] && ft_strchr(set, s1[j]))
		j--;
	new_string = ft_substr(s1, i, ((j - i) + 1));
	return (new_string);
}
/*
#include <stdio.h>
#include <stdlib.h>
int	main(void)
{
	char	*s1 = "ola isto acaba em o";
	char	*set = "o";
	char	*trim = ft_strtrim(s1, set);
	
	printf ("%s\n", trim);
	free (trim);
	return (0);
}
*/