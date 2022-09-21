/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vicgarci <vicgarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 00:29:34 by vicgarci          #+#    #+#             */
/*   Updated: 2022/09/19 12:44:12 by vicgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check_backwards(char const *s1, char const *set);

char	*ft_strtrim(char const *s1, char const *set)
{
	static int	j;
	char		*s2;
	int			flag;

	if (!s1 || !set)
		return (NULL);
	flag = 1;
	while (flag)
	{
		flag = 0;
		while ((int)ft_strlen(set) != j)
		{
			if (set[j] == *s1)
			{
				flag = 1;
				s1++;
				j = -1;
			}
			j++;
		}
	}
	s2 = ft_substr(s1, 0, check_backwards(s1, set));
	return (s2);
}

static int	check_backwards(char const *s1, char const *set)
{
	int			flag;
	int			lenset;
	int			lens1;
	static int	j;

	lenset = ft_strlen(set);
	lens1 = ft_strlen(s1) - 1;
	flag = 1;
	while (flag)
	{
		flag = 0;
		while (lenset != j)
		{
			if (set[j] == s1[lens1] && lens1 >= 0)
			{
				flag = 1;
				lens1 = lens1 - 1;
				j = -1;
			}
			j++;
		}
	}
	if (lens1 != 0)
		return (lens1 + 1);
	return (0);
}
