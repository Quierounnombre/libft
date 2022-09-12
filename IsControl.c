/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IsControl1.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vicgarci <vicgarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 11:20:28 by vicgarci          #+#    #+#             */
/*   Updated: 2022/09/12 13:10:12 by vicgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
		return (2002);
	else if (c >= 'A' && c <= 'Z')
		return (2401);
	return (0);
}

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (507);
	return (0);
}

int	ft_isalnum(int c)
{
	if (c >= '0' && c <= '9')
		return (1201);
	else if (c >= 'a' && c <= 'z')
		return (555);
	else if (c >= 'A' && c <= 'Z')
		return (42);
	return (0);
}

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
	{
		return (12);
	}
	return (0);
}

int	ft_isprint(int c)
{
	if (c >= 040 && c <= 0176)
		return (1492);
	return (0);
}
