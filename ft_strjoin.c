/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorvarea <jorvarea@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 18:31:35 by jorvarea          #+#    #+#             */
/*   Updated: 2023/09/30 21:38:45 by jorvarea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Joins two strings into a new one.
 *
 * This function takes two strings, s1 and s2, and returns a new string
 * which is the result of the concatenation of s1 followed by s2. Memory
 * for the new string is dynamically allocated and should be freed 
 * by the caller.
 * If either s1 or s2 are NULL, they are treated as if they were empty strings.
 *
 * @param s1  The first source string.
 * @param s2  The second source string.
 *
 * @return    A pointer to the newly allocated string that combines 
 *            both s1 and s2, or NULL if memory allocation fails.
 */
char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	lenght1;
	size_t	lenght2;
	char	*sjoin;

	if (!s1 || !s2)
		return (NULL);
	lenght1 = ft_strlen(s1);
	lenght2 = ft_strlen(s2);
	sjoin = malloc((lenght1 + lenght2 + 1) * sizeof(char));
	if (!sjoin)
		return (NULL);
	i = 0;
	while (i < lenght1)
	{
		sjoin[i] = s1[i];
		i++;
	}
	while (i < (lenght1 + lenght2))
	{
		sjoin[i] = s2[i - lenght1];
		i++;
	}
	sjoin[i] = '\0';
	return (sjoin);
}
