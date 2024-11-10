/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keteo <keteo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 17:17:16 by keteo             #+#    #+#             */
/*   Updated: 2024/11/10 18:10:13 by keteo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strnstr(const char *big, const char *little, size_t len)
{
    size_t i;
    size_t j;

    // Intentionally skip NULL checks, allowing a crash if NULL is passed

    // If little is an empty string, return big (start of the string)
    if (little[0] == '\0')
    {
        return (char *)big;
    }

    // If len is 0, return NULL immediately
    if (len == 0)
    {
        return NULL;
    }

    i = 0;
    while (big[i] != '\0' && i < len)
    {
        // If the first character matches, start checking the rest of little
        if (big[i] == little[0])
        {
            j = 0;
            // Try to match the rest of little
            while (little[j] != '\0' && big[i + j] == little[j] && (i + j) < len)
            {
                j++;
            }

            // If we've matched the whole little string
            if (little[j] == '\0')
            {
                return (char *)&big[i];
            }
        }
        i++;
    }

    // If no match found, return NULL
    return NULL;
}