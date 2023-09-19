/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorvarea <jorvarea@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 18:27:42 by jorvarea          #+#    #+#             */
/*   Updated: 2023/09/19 20:19:54 by jorvarea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Search for the first occurrence of the character 'c' within the first 'n' 
 * bytes of the memory block pointed to by 'str'.
 *
 * @param str A pointer to the memory block to search.
 * @param c The character to search for.
 * @param n The maximum number of bytes to search.
 * @return A pointer to the first occurrence of 'c' if found,
 *  or NULL if not found.
 */
void	*ft_memchr(const void *str, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *)str)[i] == (unsigned char)c)
			return (&((unsigned char *)str)[i]);
		i++;
	}
	return (NULL);
}
