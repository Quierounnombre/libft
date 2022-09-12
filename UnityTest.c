/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   UnityTest.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vicgarci <vicgarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 11:53:08 by vicgarci          #+#    #+#             */
/*   Updated: 2022/09/12 13:09:34 by vicgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdio.h"
#include "libft.h"

int main(void)
{
	int i;

	i = -1;
	while (i != 127)
	{
		printf("valor de i: %d, resultado: %d\n", i, ft_isprint(i));
		i++;
	}
}
