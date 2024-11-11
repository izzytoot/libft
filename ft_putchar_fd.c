/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icunha-t <icunha-t@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 12:48:49 by icunha-t          #+#    #+#             */
/*   Updated: 2024/11/11 09:45:44 by icunha-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write (fd, &c, 1);
}
/*
#include <fcntl.h>
#include "libft.h"
//flags 0_WRONLY for writing only and 0_CREAT for creating a new file
//0644 permission mode (owner: 6 read and write, group: 4 read, others: 4 read)
int main(void)
{
    int	fd;
	char	*str;
	char	*test_st;
	char	*test_sf;

	fd = open("output_char.txt", O_WRONLY | O_CREAT, 0644); 
	test_st = "Test terminal";
	str = test_st; 
	if (fd == -1)
        return (1);
	while (*str)
	{
		ft_putchar_fd(*str, 1);
		str++;
	}
	test_sf = "Test file";
	str = test_sf;
	while (*str)
	{
		ft_putchar_fd(*str, fd);
		str++;
	}
    close(fd);
	return (0);
}
*/
