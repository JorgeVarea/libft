/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorvarea <jorvarea@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 17:35:11 by jorvarea          #+#    #+#             */
/*   Updated: 2023/09/30 21:41:44 by jorvarea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Creates a new string, which is a duplicate of the string 's1'.
 * 
 * This function calculates the length of the string 's1', allocates
 * the necessary memory to store a copy of the string, and then copies
 * the string using 'ft_strlcpy'.
 * 
 * @param s1    The source string to be duplicated.
 *
 * @return      A pointer to the newly allocated string which is a 
 *              duplicate of 's1', or NULL if memory allocation fails.
 */
char	*ft_strdup(const char *s1)
{
	size_t	size;
	char	*s1_copy;

	size = ft_strlen(s1) + 1;
	s1_copy = malloc(size);
	if (s1_copy)
		ft_strlcpy(s1_copy, (char *)s1, size);
	return (s1_copy);
}
