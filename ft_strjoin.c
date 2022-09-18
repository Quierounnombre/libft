/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   StrFuns2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vicgarci <vicgarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 12:29:10 by vicgarci          #+#    #+#             */
/*   Updated: 2022/09/18 00:28:35 by vicgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s3;
	int		i;
	int		size;

	size = ft_strlen(s1) + ft_strlen(s2) + 1;
	i = 0;
	s3 = (char *)malloc (size * sizeof(char));
	if (s3)
	{
		ft_strlcpy(s3, s1, ft_strlen(s1) + 1);
		ft_strlcat(s3, s2, ft_strlen(s2) + 1);
	}
	return (s3);
}
