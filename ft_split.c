/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icunha-t <icunha-t@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 15:17:06 by icunha-t          #+#    #+#             */
/*   Updated: 2024/11/11 09:45:44 by icunha-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_words(char const *s, char c)
{
	size_t	w;
	char	prev_char;
	int		i;

	w = 0;
	prev_char = c;
	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			prev_char = s[i];
		if (s[i] != c)
		{
			if (prev_char == c)
				w++;
		}
		prev_char = s[i];
		i++;
	}
	return (w);
}

static int	error_malloc(char **sing_word, int pos, size_t buffer)
{
	int	i;

	i = 0;
	sing_word[pos] = malloc(buffer);
	if (!sing_word[pos])
	{
		while (i < pos)
			free(sing_word[i++]);
		free(sing_word);
		return (1);
	}
	return (0);
}

static int	fill_new_arr(char **sing_word, char const *s, char c)
{
	int		i;
	size_t	len;

	i = 0;
	if (!sing_word)
		return (0);
	while (*s)
	{
		len = 0;
		while (*s == c && *s)
			++s;
		while (*s != c && *s)
		{
			++len;
			++s;
		}
		if (len)
		{
			if (error_malloc(sing_word, i, len + 1))
				return (1);
			ft_strlcpy(sing_word[i], s - len, len + 1);
		}
		++i;
	}
	return (0);
}

char	**ft_split(char const *s, char c)
{
	size_t	w;
	char	**new_arr;

	if (!s)
		return (NULL);
	w = count_words(s, c);
	new_arr = malloc((w + 1) * sizeof(char *));
	if (!new_arr)
		return (NULL);
	new_arr[w] = NULL;
	if (fill_new_arr(new_arr, s, c))
		return (NULL);
	return (new_arr);
}
/*
#include <stdio.h>
int	main(void)
{
	char	const *s;
	char	c;
	char	**result;
	int	i;
	
	s = "isto é uma string de 6   ";
	c = ' ';
	result = ft_split(s, c);
	i = 0;
	while (result[i])
	{
		printf("%s\n", result[i]);
		free(result[i]);
		i++;
	}
	free (result);
	return (0);
}
*/
