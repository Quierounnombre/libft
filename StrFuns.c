/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strfuns.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vicgarci <vicgarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 14:03:12 by vicgarci          #+#    #+#             */
/*   Updated: 2022/09/13 13:55:31 by vicgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (*s != '\0')
	{
		s++;
		i++;
	}
	return (i);
}

size_t	ft_strlcpy(char *restrict dest, const char *restrict src, size_t size)
{
	size_t	i;

	i = 0;
	while (src[i] != '\0' && i < size)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (i);
}

size_t	ft_strlcat(char *restrict dest, const char *restrict src, size_t size)
{
	size_t		i;
	size_t		j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0' && (j < size))
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (j);
}

char	*ft_strchr(const char *src, unsigned int c)
{
	if (src == NULL)
		return (NULL);
	while (*src)
	{
		if (*src == (char)c)
		{
			return ((char *)src);
		}
		src++;
	}
	return (NULL);
}

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
