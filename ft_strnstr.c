/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorvarea <jorvarea@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 19:42:11 by jorvarea          #+#    #+#             */
/*   Updated: 2023/09/16 09:53:59 by jorvarea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Locate a substring within a string with a limited search length.
 *
 * This function searches for the first occurrence of the substring 'to_find'
 * within the string 'str', but limits the search to the first 'n' characters
 * of 'str'. If 'to_find' is found within the first 'n' characters, it returns
 * a pointer to the beginning of the found substring; otherwise, 
 * it returns NULL.
 *
 * @param str      The string to be searched.
 * @param to_find  The substring to locate.
 * @param n        The maximum number of characters to search in 'str'.
 *
 * @return         A pointer to the found substring in 'str',
 * 				 or NULL if not found.
 */
char	*ft_strnstr(char *str, char *to_find, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i] != '\0' && i < n)
	{
		if (str[i] == to_find[0])
		{
			j = 0;
			while (i + j < n && to_find[j] && str[i + j] && str[i
					+ j] == to_find[j])
				j++;
			if (to_find[j] == '\0')
				return (&str[i]);
		}
		i++;
	}
	return (NULL);
}
