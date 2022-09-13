/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   UnityTest.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vicgarci <vicgarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 11:53:08 by vicgarci          #+#    #+#             */
/*   Updated: 2022/09/13 10:52:38 by vicgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdio.h"
#include "libft.h"

int main(void)
{
	char *source = "Hola Mundo";
	char *ptr;

	ptr = ft_strrchr(source, 'o');
	printf("Encontrado caracter en: %s", ptr);
	/*
	char *test1 = "Hola Mundo";
	char *test2 = "";
	char *test3 = "hkbskjdsadojdsack z xczc 44`ppofjbhj v";
	
	printf("Resultado test1: %d\n", ft_strlen(test1));
	printf("Resultado test2: %d\n", ft_strlen(test2));
	printf("Resultado test3: %d\n", ft_strlen(test3));
	*/
	/*
	int i;
	i = -1;
	while (i != 127)
	{
		printf("valor de i: %d, resultado: %d\n", i, ft_isprint(i));
		i++;
	}
	*/
}
