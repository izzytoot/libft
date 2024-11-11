/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icunha-t <icunha-t@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 18:35:56 by root              #+#    #+#             */
/*   Updated: 2024/11/11 09:45:44 by icunha-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	if (!s)
		return ;
	write (fd, s, (ft_strlen(s)));
	write (fd, "\n", 1);
}
/*
#include <stdio.h>
#include <fcntl.h>

int	main(void)
{
	int	fd;
	char	*test_st;
	char	*test_sf;
	
	fd = open("output_endl.txt", O_WRONLY | O_CREAT, 0644);
	if (fd == -1)
        return (1);
	test_sf = "Test file";
	ft_putendl_fd (test_sf, 1);
	test_st = "Test terminal";
	ft_putendl_fd (test_st, fd);
	close(fd);
	return (0);
}
*/