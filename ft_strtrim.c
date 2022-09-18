/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vicgarci <vicgarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 00:29:34 by vicgarci          #+#    #+#             */
/*   Updated: 2022/09/18 00:47:45 by vicgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check_backwards(char const *s1, char const *set);

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
