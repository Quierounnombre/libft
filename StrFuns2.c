/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   StrFuns2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vicgarci <vicgarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 12:29:10 by vicgarci          #+#    #+#             */
/*   Updated: 2022/09/13 17:01:24 by vicgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	while (n)
	{
		if (*s1 != *s2)
			return ((int)(*s1 - *s2));
		n--;
		s1++;
		s2++;
	}
	return (0);
}

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	if (!*needle)
		return ((char *)haystack);
	while (len)
	{
		if (*haystack == *needle)
		{
			if (ft_strncmp(haystack, needle, ft_strlen(needle)) == 0)
				return ((char *)haystack);
		}
		haystack++;
		len--;
	}	
	return (NULL);
}

char	*ft_strdup(const char *s1)
{
	int		i;
	int		size;
	char	*s2;

	i = 0;
	size = strlen(s1) + 1;
	s2 = (char *)malloc(size * sizeof(char));
	while (s1[i])
	{
		s2[i] = s1[i];
		i++;
	}
	if (!s2)
		return (NULL);
	return (s2);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	int		i;
	char	*s2;

	i = 0;
	s2 = (char *)malloc ((len + 1) * sizeof(char));
	while (s)
	{
		if (start)
			start--;
		else if (len)
		{
			s2[i] = *s;
			len--;
			i++;
		}
		else
		{
			if (!s2)
				return (NULL);
			return (s2);
		}
		s++;
	}
	return (NULL);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s3;
	int		i;
	int		size;

	size = ft_strlen(s1) + ft_strlen(s2) + 1;
	i = 0;
	s3 = (char *)malloc (size * sizeof(char));
	if (s3)
	{
		ft_strlcpy(s3, s1, ft_strlen(s1) + 1);
		ft_strlcat(s3, s2, ft_strlen(s2) + 1);
	}
	return (s3);
}
