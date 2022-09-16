/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vicgarci <vicgarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 11:13:52 by vicgarci          #+#    #+#             */
/*   Updated: 2022/09/16 19:08:06 by vicgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include "string.h"
# include "stdlib.h"

/*IsControl1*/
int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
//0 Static

/*StrFuns*/
size_t	ft_strlen(const char *s);
size_t	ft_strlcpy(char *restrict dest, const char *restrict src, size_t size);
size_t	ft_strlcat(char *restrict dest, const char *restrict src, size_t size);
char	*ft_strchr(const char *src, unsigned int c);
char	*ft_strrchr(const char *src, unsigned int c);
//0 Static

/*StrFuns2*/
int		ft_strncmp(const char *s1, const char *s2, size_t n);
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);
char	*ft_strdup(const char *s1);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strjoin(char const *s1, char const *s2);
//0 Static

/*StrFuns3*/
char	*ft_strtrim(char const *s1, char const *set);
char	**ft_split(char const *s, char c);
//3 Static ft_split necesita reacerse aloca +1 bit y no 
//hace free en caso de error, + los otros

/*StrFuns4*/
int		ft_tolower(int c);
int		ft_toupper(int c);
int		ft_atoi(const char *str);
char	*ft_itoa(int c);
/*1 Static*/

/*MemsFuns*/
void	*ft_memset(void *b, int c, size_t len);
void	ft_bzero(void *s, size_t n);
void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n);
void	*ft_memmove(void *dst, const void *src, size_t len);
void	*ft_memchr(const void *s, int c, size_t n);
/*0 Static*/

/*MemsFuns2*/
int		ft_memcmp(const void *s1, const void *s2, size_t n);
void	*ft_calloc(size_t count, size_t size);
/* 0 Static*/

//faltan iteri, mapi, putchar, putstr, putend, putnbr, slipt + bonus
#endif