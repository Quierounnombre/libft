/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   StrFuns5.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vicgarci <vicgarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 19:48:02 by vicgarci          #+#    #+#             */
/*   Updated: 2022/09/17 19:23:37 by vicgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	int	i;

	i = 0;
	if (!s || !f)
		return ;
	while (s[i])
	{
		f(i, s + i);
		i++;
	}
}

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*s2;
	int		size;

	i = 0;
	if (!s || !f)
		return (NULL);
	size = ft_strlen(s) + 1;
	s2 = malloc(size * sizeof(char));
	while (*s != '\0')
	{
		s2[i] = f(i, *s);
		s++;
		i++;
	}
	return (s2);
}
