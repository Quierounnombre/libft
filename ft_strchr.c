/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vicgarci <vicgarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 00:22:19 by vicgarci          #+#    #+#             */
/*   Updated: 2022/09/18 00:22:29 by vicgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *src, unsigned int c)
{
	if (src == NULL)
		return (NULL);
	while (*src != '\0')
	{
		if (*src == (char)c)
		{
			return ((char *)src);
		}
		src++;
	}
	return (NULL);
}
