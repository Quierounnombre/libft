/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vicgarci <vicgarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 17:02:41 by vicgarci          #+#    #+#             */
/*   Updated: 2022/09/18 22:39:47 by vicgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		**ft_check(char **s, int j);
static int	ft_count_words(const char *str, char c);
static int	ft_next_word(const char *str, char c);

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	int		temp;
	char	**s2;

	if (!s)
		return (NULL);
	i = ft_count_words(s, c);
	s2 = (char **)malloc ((i) * sizeof(char *));
	j = (i);
	i = 0;
	if (s2 != NULL)
	{
		while (i != j)
		{
			temp = ft_next_word(s, c);
			s2[i] = ft_substr(s, 0, temp);
			while (temp--)
				s++;
			i++;
		}
		return (ft_check(s2, j));
	}
	return (NULL);
}

static int	ft_next_word(const char *str, char c)
{
	int	i;

	i = 0;
	while (*str != '\0')
	{
		i++;
		str++;
		if (*str == c)
		{
			while (*str == c)
			{
			i++;
			str++;
			}
			return (i);
		}
	}
	return (i);
}

static int	ft_count_words(const char *str, char c)
{
	int	i;
	int	trigger;

	i = 1;
	trigger = 0;
	while (*str)
	{
		if (*str != c && trigger == 0)
		{
			trigger = 1;
			i++;
		}
		else if (*str == c)
			trigger = 0;
		str++;
	}
	return (i);
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
