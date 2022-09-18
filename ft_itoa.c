/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   StrFuns4.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vicgarci <vicgarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 14:09:04 by vicgarci          #+#    #+#             */
/*   Updated: 2022/09/18 00:41:41 by vicgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa_aux(int c, char *s, int len, int neg)
{
	int	temp;
	int	tlen;

	temp = c;
	len--;
	tlen = len;
	while (len--)
	{
		s[len] = (temp % 10) + '0';
		temp = temp / 10;
	}
	if (neg == -1)
		s[len] = '-';
	s[tlen] = '\0';
	return (s);
}

char	*ft_itoa(int c)
{
	char		*s;
	int			temp;
	static int	len;
	int			neg;

	if (c == -214748368)
		return (ft_strdup("-2147483648"));
	if (c < 0)
	{
		neg = -1;
		len++;
	}
	neg = 1;
	temp = c;
	while (temp)
	{
		temp /= 10;
		len++;
	}
	s = (char *)malloc ((len + 1) * sizeof(char));
	if (s)
	{
		return (ft_itoa_aux(c, s, len + 1, neg));
	}
	return (NULL);
}
