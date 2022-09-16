/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   StrFuns4.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vicgarci <vicgarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 14:09:04 by vicgarci          #+#    #+#             */
/*   Updated: 2022/09/16 20:57:37 by vicgarci         ###   ########.fr       */
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

static int	ft_power(int base, int times)
{
	int c;

	c = 1;
	while (times--)
		c *= base;
	return (c);
}

char	*ft_itoa(int c)
{
	static int	i;
	int			temp;
	char		*s;
	static int	neg;
	int			cc;

	temp = c;
	if (c < 0)
		neg = 1;
	while (temp != 0)
	{
		i++;
		temp = temp / 10;
	}
	s = ft_calloc(i, sizeof(char));
	if (s == NULL)
		return (NULL);
	cc = c;
	if (neg == 1)
	{
		s[temp] = '-';
		temp++;
		cc = c * -1;
	}
	while (i)
	{
		s[temp] = (cc / ft_power(10, i - 1)) + '0';
		i--;
		temp++;
		cc = cc % ft_power(10, i);
	}
	return (s);
}