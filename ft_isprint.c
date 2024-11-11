/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icunha-t <icunha-t@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 13:34:43 by icunha-t          #+#    #+#             */
/*   Updated: 2024/11/11 09:45:44 by icunha-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c < 0 || c > 127)
		return (0);
	if (c >= ' ' && c <= '~')
		return (16384);
	return (0);
}

/*
#include <stdio.h>
#include <ctype.h>
int	main(void)
{
	int	x;
	
	x = 32;
	printf ("%d\n", ft_isprint(x));
	printf ("%d\n", isprint(x));
	return (0);
}
*/
