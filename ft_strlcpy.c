/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorvarea <jorvarea@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 19:01:32 by jorvarea          #+#    #+#             */
/*   Updated: 2023/10/01 01:00:22 by jorvarea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Copies up to 'size - 1' characters from 'src' to 'dest' 
 * and ensures 'dest' is null-terminated.
 *
 * This function copies characters from 'src' to 'dest' until either 
 * 'size - 1' characters have been copied, the end of 'src' is reached, 
 * or a null character ('\0') is encountered in 'src'.
 * It then ensures that 'dest' is null-terminated by adding
 * a null character ('\0') at the end.
 *
 * @param dest  The destination buffer to copy the string to.
 * @param src   The source string to be copied.
 * @param size  The maximum number of characters to copy to 'dest' (
 * 				including the null terminator).
 *
 * @return      The total number of characters in 'src', 
 * 				excluding the null terminator.
 *              If 'size' is 0, it returns the length of 'src'.
 */
size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;

	if (size == 0)
		return (ft_strlen(src));
	i = 0;
	while (i < (size - 1) && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	while (src[i] != '\0')
		i++;
	return (i);
}
