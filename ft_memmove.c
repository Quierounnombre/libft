/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vicgarci <vicgarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 00:51:07 by vicgarci          #+#    #+#             */
/*   Updated: 2022/09/18 14:38:54 by vicgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	static size_t	i;
	char			*aux1;
	char			*aux2;

	aux1 = (char *)dst;
	aux2 = (char *)src;
	if (aux1 == NULL || aux2 == NULL)
		return (NULL);
	if (dst > src)
	{
		while (len--)
			aux1[len] = aux2[len];
	}
	else
	{
		while (len != i)
		{
			aux1[i] = aux2[i];
			i++;
		}
	}
	return (dst);
}
