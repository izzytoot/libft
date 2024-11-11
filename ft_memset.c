/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icunha-t <icunha-t@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 14:35:49 by icunha-t          #+#    #+#             */
/*   Updated: 2024/11/11 09:45:44 by icunha-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*temp;

	i = 0;
	temp = (unsigned char *)s;
	while (i < n)
	{
		temp[i] = (unsigned char)c;
		i++;
	}
	return (s);
}

/*
#include <string.h>
#include <stdio.h>
void printArray(int arr[], int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		printf("%d", arr[i]);
		i++;
	}
	printf ("\n");
}
int	main(void)
{
	char	str[] = "vamos testar";
	printf ("%s\n", (char *)ft_memset(str, '-', 3));
	printf ("%s\n", (char *)memset(str, '-', 3));
	printf ("%s\n", (char *)ft_memset(str + 5, '-', 3));
	printf ("%s\n", (char *)memset(str + 5, '-', 3));
	int	arr[5] = {1, 2, 3, 4, 5};
	ft_memset(arr, 0, 3*sizeof(arr[0]));
	printArray (arr, 5);
	memset(arr, 0, 3*sizeof(arr[0]));
	printArray (arr, 5);
	return (0);
}
*/