/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vicgarci <vicgarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 11:13:52 by vicgarci          #+#    #+#             */
/*   Updated: 2022/09/13 18:02:52 by vicgarci         ###   ########.fr       */
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
//1 Static

#endif