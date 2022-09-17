/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MemsFuns.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vicgarci <vicgarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 19:05:36 by vicgarci          #+#    #+#             */
/*   Updated: 2022/09/17 20:48:55 by vicgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	static size_t	i;

	while (i != len)
	{
		((unsigned char *)b)[i] = (unsigned char)c;
		i++;
	}
	return (b);
}

void	ft_bzero(void *s, size_t n)
{
	static size_t	i;

	while (i != n)
	{
		((unsigned char *)s)[i] = 0;
		i++;
	}
}

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	static int	i;

	while (n--)
	{
		((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (dst);
}

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	static int		i;
	unsigned char	*aux1;
	unsigned char	*aux2;

	aux1 = (unsigned char *)dst;
	aux2 = (unsigned char *)src;
	if (aux1 == NULL || aux2 == NULL)
		return (NULL);
	if (dst > src)
	{
		while (len)
		{
			((unsigned char *)dst)[len] = ((unsigned char *)src)[len];
			len--;
		}
	}
	else
	{
		while (len--)
		{
			((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
			i++;
		}
	}
	return (dst);
}

void	*ft_memchr(const void *s, int c, size_t n)
{
	static int	i;

	if (s == NULL)
		return (NULL);
	while (((unsigned char *)s)[i] != '\0' && n != 0)
	{
		if (((unsigned char *)s)[i] == (unsigned char)c)
		{
			while (i-- != 0)
				s++;
			return ((void *)s);
		}
		i++;
		n--;
	}
	return (NULL);
}
