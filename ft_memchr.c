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
	int	i;

	i = 0;
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
