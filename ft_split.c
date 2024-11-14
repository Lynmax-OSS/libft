/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keteo <keteo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 14:15:31 by keteo             #+#    #+#             */
/*   Updated: 2024/11/14 20:59:52 by keteo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int ft_word_count(const char *s, char c)
{
	int	count;
	int	word;
	while (*s)
	{
		if (*s != c && !word)
		{
			word = 1;
			count++;
		}
		else if (*s == c)
		{
			word = 0;
		}
		s++;
	}
	return (count);
}

static int ft_word_len(const char *s, char c)
{
	int len;
	
	len = 0;
	while (s[len] && s[len] != c)
	{
		len++;
	}
	return (len);
}

static char *ft_strdup_substr(const char *s, int start, int len)
{
	int i;
	char *word;

	i = 0;
	word = (char *)malloc(sizeof(char) * (len + 1));
	if (!word)
	{
		return(NULL);
	}
	while (i < len)
	{
		word[i] = s[start + i];
		i++;
	}
	word[len] = '\0';
	return (word);
}

static void ft_free(char **result, int words)
{
	int i;
	while (i < words)
	{
		free(result[i]);
		i++;
	}
	free(result);
}

char	**ft_split(char const *s, char c)
{
	
}