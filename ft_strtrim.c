/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorvarea <jorvarea@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 18:54:43 by jorvarea          #+#    #+#             */
/*   Updated: 2023/09/24 20:14:27 by jorvarea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Checks if a character 'c' exists within the string 'set'.
 *
 * @param set  The character set to search within.
 * @param c    The character to look for.
 *
 * @return     1 if the character 'c' is found in 'set', otherwise 0.
 */
static int	ft_char_in_set(char const *set, char const c)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

/**
 * Produces a new string which is a copy of 's1', but with the characters
 * specified in 'set' trimmed from the beginning and the end.
 *
 * @param s1   The source string to trim.
 * @param set  The set of characters to trim from 's1'.
 *
 * @return     A newly allocated string containing the trimmed version of 's1',
 *             or NULL if an error occurs.
 */
char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		start;
	int		end;
	char	*strim;

	if (!s1 || !set)
		return (NULL);
	i = 0;
	while (s1[i] && ft_char_in_set(set, s1[i]))
		i++;
	start = i;
	i = ft_strlen((char *)s1) - 1;
	while (i >= 0 && ft_char_in_set(set, s1[i]))
		i--;
	end = i;
	strim = ft_substr(s1, start, end - start + 1);
	if (!strim)
		return (NULL);
	return (strim);
}
