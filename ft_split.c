/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   StrFuns3.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vicgarci <vicgarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 17:02:41 by vicgarci          #+#    #+#             */
/*   Updated: 2022/09/18 00:30:03 by vicgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		**ft_check(char **s, int j);
char		*ft_store(char *s, char c, char *s2);

char	**ft_split(char const *s, char c)
{
	static int	i;
	static int	j;
	char		**s2;

	while (s[j] != '\0')
	{
		if (s[j] == c)
			i++;
		j++;
	}
	s2 = (char **)malloc ((i + 1) * sizeof(char *));
	j = (i + 1);
	i = 0;
	if (s2 != NULL)
	{
		while (i != j)
		{
			s2[i] = ft_store((char *)s, c, s2[i]);
			s = (const char *)strchr(s, c);
			s++;
			i++;
		}
		return (ft_check(s2, j));
	}
	return (NULL);
}

char	*ft_store(char *s, char c, char *s2)
{
	int	j;
	int	i;

	i = 0;
	j = 0;
	while (1)
	{
		if (s[j] == c || s[j] == '\0')
		{
			s2 = (char *)malloc ((j + 1) * sizeof(char));
			if (s2 == NULL)
				return (NULL);
			while (i != j)
			{
				s2[i] = *s;
				s++;
				i++;
			}
			s2[i] = '\0';
			return (s2);
		}
		j++;
	}
	return (s2);
}

char	**ft_check(char **s, int j)
{
	static int	i;
	static int	error;

	while (i != j)
	{
		if (s[i] == NULL)
			error = 1;
		i++;
	}
	i = 0;
	if (error)
	{
		while (i != j)
		{
			free(s[i]);
		}
		free (s);
		return (NULL);
	}
	return (s);
}
