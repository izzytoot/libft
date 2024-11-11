/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icunha-t <icunha-t@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 12:27:30 by icunha-t          #+#    #+#             */
/*   Updated: 2024/11/11 09:45:44 by icunha-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if (c < 0 || c > 127)
		return (0);
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (8);
	if (c >= '0' && c <= '9')
		return (8);
	return (0);
}

/*
#include <ctype.h>
#include <stdio.h>
int	main(void)
{
	int	x;
	
	x = '5';
	printf ("%d\n", ft_isalnum(x));
	printf ("%d\n", isalnum(x));
	return (0);
}
*/
