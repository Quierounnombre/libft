/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vicgarci <vicgarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 19:05:36 by vicgarci          #+#    #+#             */
/*   Updated: 2022/09/19 12:41:00 by vicgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	int		i;
	int		size;

	i = 0;
	size = ft_strlen(s) + 1;
	if (!s)
		return (NULL);
	while (size && n != 0)
	{
		if (((unsigned char *)s)[i] == (unsigned char)c)
		{
			while (i-- != 0)
				s++;
			return ((void *)s);
		}
		i++;
		n--;
		size--;
	}
	return (NULL);
}
