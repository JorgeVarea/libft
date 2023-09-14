/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorvarea <jorvarea@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 17:56:51 by jorvarea          #+#    #+#             */
/*   Updated: 2023/09/14 19:28:27 by jorvarea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Locate the first occurrence of the specified character 'c' 
 * in the given string 'str'.
 *
 * This function searches for the character 'c' in the string 'str' 
 * and returns a pointer to the first occurrence of 'c' in 'str'. 
 * If 'c' is not found, it returns NULL.
 *
 * @param str  The string in which to search for the character 'c'.
 * @param c    The character to be located within the string.
 *
 * @return     A pointer to the first occurrence of 'c' in 'str',
 *  or NULL if 'c' is not found.
 */
char	*ft_strchr(char *str, int c)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((unsigned char)str[i] == (unsigned char)c)
			return (&str[i]);
		i++;
	}
	if (c == '\0')
		return (&str[i]);
	else
		return (NULL);
}
