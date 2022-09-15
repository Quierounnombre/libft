/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   StrFuns3.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vicgarci <vicgarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 17:02:41 by vicgarci          #+#    #+#             */
/*   Updated: 2022/09/15 16:07:26 by vicgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check_backwards(char const *s1, char const *set);
static int	number_of_mallocs(char const *s, char c);
static int	calc_dist(char const *s, char c);

char	*ft_strtrim(char const *s1, char const *set)
{
	int		j;
	char	*s2;
	int		flag;

	flag = 1;
	j = 0;
	while (flag)
	{
		flag = 0;
		while ((int)ft_strlen(set) != j)
		{
			if (set[j] == *s1)
			{
				flag = 1;
				s1++;
			}
			j++;
		}
		j = 0;
	}
	s2 = malloc ((int)ft_strlen(s1) - check_backwards(s1, set) * sizeof(char));
	if (!s2)
		return (NULL);
	ft_strlcpy(s2, s1, (int)ft_strlen(s1) - check_backwards(s1, set));
	return (s2);
}

static int	check_backwards(char const *s1, char const *set)
{
	int	flag;
	int	lenset;
	int	lens1;
	int	j;

	j = 0;
	lenset = ft_strlen(set);
	lens1 = ft_strlen(set);
	flag = 1;
	while (flag)
	{
		flag = 0;
		while ((int)ft_strlen(set) != j)
		{
			if (set[j] == s1[lens1])
			{
				flag = 1;
				lens1--;
			}
			j++;
		}
		j = 0;
	}
	return (lens1 - 1);
}

char	**ft_split(char const *s, char c)
{
	int		templen;
	int		i[2];
	char	**s2;

	i[0] = 0;
	i[1] = 0;
	s2 = (char **)malloc (number_of_mallocs(s, c) * sizeof(char *));
	if (s2 == NULL)
		return (NULL);
	while (s && *s != '\0')
	{
		templen = ft_strlen(s) - (calc_dist(s, c));
		s2[i[1]] = (char *)malloc(sizeof(char) * (templen + 1));
		if (s2[i[1]] == NULL)
			return (NULL);
		while (templen-- != 0)
		{
			if (*s != c)
				s2[i[1]][i[0]++] = *s;
			s++;
		}
		s2[i[1]++][i[0]] = '\0';
		i[0] = 0;
	}
	return (s2);
}

static int	number_of_mallocs(char const *s, char c)
{
	int	i;

	i = 0;
	while (s && *s != '\0')
	{
		if (*s == c)
			i++;
		s++;
	}
	return (i + 1);
}

static int	calc_dist(char const *s, char c)
{
	int	i;
	int	flag;

	i = 0;
	flag = 0;
	while (s && *s != '\0')
	{
		if (flag == 1)
			i++;
		else if (*s == c)
		{
			flag = 1;
		}
		s++;
	}
	return (i);
}
