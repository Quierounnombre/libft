/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PutFuns.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vicgarci <vicgarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 18:42:28 by vicgarci          #+#    #+#             */
/*   Updated: 2022/09/17 20:55:57 by vicgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	char	*s;

	if (!c || !fd)
		return ;
	s = "A";
	*s = c;
	write(fd, s, 1);
}

void	ft_putstr_fd(char *s, int fd)
{
	if (!s || !fd)
		return ;
	write(fd, s, ft_strlen(s));
}

void	ft_putendl_fd(char *s, int fd)
{
	if (!s || !fd)
		return ;
	write(fd, s, ft_strlen(s));
	write(fd, "\n", 1);
}

void	ft_putnbr_fd(int n, int fd)
{
	char	*s;

	if (!n || !fd)
		return ;
	s = "A";
	if (n < 0)
	{
		write(fd, "-", 1);
		n = n * -1;
	}
	while (n != 0)
	{
		*s = (n / 10) + '0';
		write(fd, s, 1);
		n = n % 10;
	}
}
