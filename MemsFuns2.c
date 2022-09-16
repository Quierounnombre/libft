/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MemsFuns2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vicgarci <vicgarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 13:13:12 by vicgarci          #+#    #+#             */
/*   Updated: 2022/09/16 14:33:14 by vicgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*cs1;
	unsigned char	*cs2;

	cs1 = (unsigned char *)s1;
	cs2 = (unsigned char *)s2;
	while (n)
	{
		if (*cs1 != *cs2)
			return ((int)(*cs1 - *cs2));
		n--;
		cs1++;
		cs2++;
	}
	return (0);
}

void	*ft_calloc(size_t count, size_t size)
{
	void	*s1;

	s1 = malloc(count * size);
	if (s1 == NULL)
		return (NULL);
	ft_bzero(s1, count * size);
	return (s1);
}
