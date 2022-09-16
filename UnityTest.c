/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   UnityTest.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vicgarci <vicgarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 11:53:08 by vicgarci          #+#    #+#             */
/*   Updated: 2022/09/16 20:58:28 by vicgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdio.h"
#include "stdlib.h"
#include "libft.h"

char ft_printlen(unsigned int i, char s)
{
	printf("He aumentado la letra en %d de %c a %c\n", i, s, ft_toupper((int) s));
	return ft_toupper((int) s);
}

int main(void)
{
	char *s = "gola";
	char *s2 = ft_strmapi(s, &ft_printlen);
	printf("%s", s2);
	free(s2);
	/*
	int i = 1;
	char *s = "Hola/Mundo";
	char **s2 = ft_split(s, '/');
	
	while (i != -1)
	{
		printf("S%d: %s\n", i, s2[i]);
		free(s2[i]);
		i--;
	}
	free (s2);
	*/
	/*
	char *s1 = "aaHolaBBMudnoa";
	char *set = "ab";
	char *s3 = ft_strtrim(s1, set);
	printf("S1: %s\n", s1);
	printf("S2: %s\n", set);
	printf("S3: %s\n", s3);
	free(s3);
	*/
	/*
	char *s1 = "Hola Mundogasdg";
	char *s2 = "sd";
	int z = 10;
	char *i = strnstr(s1, s2, z);
	char *b = ft_strnstr(s1, s2, z);
	
	printf("La comparación original tiene resultado: %s\n", i);
	printf("La comparación propia tiene resultado: %s", b);
	*/
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
