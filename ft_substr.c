/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorvarea <jorvarea@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 18:09:48 by jorvarea          #+#    #+#             */
/*   Updated: 2023/09/22 22:16:43 by jorvarea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Extracts a substring from the string 's' starting at 'start'
 * and of length 'len'.
 *
 * This function allocates memory for a new string of size 'len',
 * then copies 'len' characters from 's' starting at index 'start'
 * into the new string.
 *
 * @param s      The source string.
 * @param start  The index to start the substring extraction from.
 * @param len    The number of characters to extract.
 *
 * @return       A pointer to the newly allocated substring, or NULL
 *               if memory allocation fails.
 */
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	size_s;
	char	*sub_s;

	if (!s)
		return (NULL);
	size_s = ft_strlen((char *)s);
	if (start >= size_s)
	{
		sub_s = malloc(1);
		if (sub_s)
			sub_s[0] = '\0';
		else
			return (NULL);
		return (sub_s);
	}
	if (len > size_s - start)
		len = size_s - start;
	sub_s = malloc(len + 1);
	if (!sub_s)
		return (NULL);
	ft_strlcpy(sub_s, (char *)&s[start], len + 1);
	return (sub_s);
}
