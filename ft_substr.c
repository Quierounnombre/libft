/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vicgarci <vicgarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 00:27:56 by vicgarci          #+#    #+#             */
/*   Updated: 2022/09/18 00:28:08 by vicgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
