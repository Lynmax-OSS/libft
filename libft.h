/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keteo <keteo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 14:58:58 by keteo             #+#    #+#             */
/*   Updated: 2024/11/09 16:52:18 by keteo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int ft_isalpha(int c);
int ft_isdigit(int c);
int ft_isascii(int c);
int ft_isprint(int c);
int ft_isalnum(int c);
int ft_strlen(const char *str);
int ft_toupper(int c);
int ft_tolower(int c);
int ft_atoi(const char *str);
int ft_strncmp(const char *s1, const char *s2, size_t n);
size_t	ft_strlcat(char *dst, const char *src, size_t size);
