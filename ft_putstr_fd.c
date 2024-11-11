/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icunha-t <icunha-t@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 14:40:57 by icunha-t          #+#    #+#             */
/*   Updated: 2024/11/11 09:45:44 by icunha-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	if (!s)
		return ;
	write(fd, s, ft_strlen(s));
}
/*
#include <fcntl.h>
#include "libft.h"

int main(void)
{
    int	fd;
	char	*test_st;
	char	*test_sf;

	fd = open("output_str.txt", O_WRONLY | O_CREAT, 0644);
	if (fd == -1)
        return (1);
	test_st = "Test terminal";
	ft_putstr_fd(test_st, 1);
	test_sf = "Test file";
	ft_putstr_fd(test_sf, fd);
    close(fd);
	return (0);
}
*/
