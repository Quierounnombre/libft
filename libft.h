/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vicgarci <vicgarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 11:13:52 by vicgarci          #+#    #+#             */
/*   Updated: 2022/09/13 10:51:38 by vicgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include "string.h"

/*IsControl1*/
int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);

/*StrFuns*/
size_t	ft_strlen(const char *s);
size_t	ft_strlcpy(char *restrict dest, const char *restrict src, size_t size);
size_t	ft_strlcat(char *restrict dest, const char *restrict src, size_t size);
char	*ft_strchr(const char *src, unsigned int c);
char	*ft_strrchr(const char *src, unsigned int c);

#endif