/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorvarea <jorvarea@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 16:05:53 by jorvarea          #+#    #+#             */
/*   Updated: 2023/09/16 09:56:05 by jorvarea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Appends up to 'size - 1' characters from 'src' to the end of 'dest'
 *  and ensures 'dest' is null-terminated.
 *
 * This function appends characters from 'src' to the end of 'dest' 
 * until either 'size - 1' characters have been appended, the end of
 * 'src' is reached, or a null character ('\0') is encountered in 'src'.
 * It then ensures that 'dest' is null-terminated by adding
 * a null character ('\0') at the end.
 *
 * @param dest  The destination buffer to which 'src' will be appended.
 * @param src   The source string to be appended to 'dest'.
 * @param size  The total size of 'dest', 
 * 				including the space for 'src' and the null terminator.
 *
 * @return      The total length of the concatenated string 
 * 				(initial length of 'dest' + length of 'src').
 *              If 'size' is 0, it returns the length of the concatenated string 
 * 				(length of 'src' + initial length of 'dest').
 */
size_t	ft_strlcat(char *dest, char *src, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0' && i < size)
		i++;
	if (size == 0)
		return (i + ft_strlen(src));
	while (src[j] != '\0' && (i + j) < (size - 1))
	{
		dest[i + j] = src[j];
		j++;
	}
	if (i < size)
		dest[i + j] = '\0';
	return (i + ft_strlen(src));
}
