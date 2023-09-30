/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorvarea <jorvarea@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 17:54:58 by jorvarea          #+#    #+#             */
/*   Updated: 2023/09/30 22:17:12 by jorvarea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Locate the last occurrence of character 'c' in the string 'str'.
 *
 * This function searches the string 'str' for the last occurrence of the
 * character 'c' and returns a pointer to the found character in the string.
 *
 * @param str  The string to be searched.
 * @param c    The character to locate.
 *
 * @return     A pointer to the last occurrence of 'c' in 'str',
 *			or NULL if not found.
 */
char	*ft_strrchr(char *str, int c)
{
	int		i;
	char	*last_position;

	i = 0;
	last_position = NULL;
	while (str[i] != '\0')
	{
		if ((unsigned char)str[i] == (unsigned char)c)
			last_position = &str[i];
		i++;
	}
	if (c == '\0')
		return (&str[i]);
	else
		return (last_position);
}
