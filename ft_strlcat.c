/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vicgarci <vicgarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 00:21:38 by vicgarci          #+#    #+#             */
/*   Updated: 2022/09/18 15:37:52 by vicgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t dstsize)
{
	static size_t	i;
	static size_t	j;
	int				maxlen;

	maxlen = dstsize - (ft_strlen(src) + 1);
	if (maxlen < 0)
		return (0);
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0' && (j < (dstsize)))
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (i);
}
