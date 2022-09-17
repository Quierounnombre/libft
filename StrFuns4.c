/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   StrFuns4.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vicgarci <vicgarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 14:09:04 by vicgarci          #+#    #+#             */
/*   Updated: 2022/09/17 21:58:21 by vicgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c -= 32;
	return (c);
}

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
	c += 32;
	return (c);
}

int	ft_atoi(const char *str)
{
	int			i;
	static int	neg;

	neg = 1;
	while (*str == '\t' || *str == '\n' || *str == '\v' || *str == '\f'
		|| *str == '\r' || *str == ' ')
		str++;
	if (*str == '-')
	{
		neg = -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		i = i * 10 + *str - '0';
		str++;
	}
	return (i * neg);
}

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
