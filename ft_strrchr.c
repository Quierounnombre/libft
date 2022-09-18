/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   StrFuns.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vicgarci <vicgarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 14:03:12 by vicgarci          #+#    #+#             */
/*   Updated: 2022/09/18 00:22:36 by vicgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *src, unsigned int c)
{
	int	i;
	int	j;

	if (src == NULL)
		return (NULL);
	i = ft_strlen(src);
	j = i;
	while (i)
	{
		src++;
		i--;
	}
	while (j)
	{
		if (*src == (char)c)
		{
			return ((char *)src);
		}
		src--;
		j--;
	}
	return (NULL);
}
