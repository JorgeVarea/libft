/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorvarea <jorvarea@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 16:45:25 by jorvarea          #+#    #+#             */
/*   Updated: 2023/09/16 18:34:28 by jorvarea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Fills a block of memory with a specified byte value.
 *
 * This function copies the byte value 'c' (interpreted as an unsigned char)
 * into each of the first 'size' bytes of the memory pointed to by 'b'.
 *
 * @param b    Pointer to the memory block to be filled.
 * @param c    The byte value to be written (as an integer).
 * @param size The number of bytes to be filled.
 * @return     A pointer to the memory block 'b'.
 */
void	*ft_memset(void *b, int c, size_t size)
{
	size_t	i;

	i = 0;
	if (size != 0)
		while (i < size)
			((unsigned char *)b)[i++] = (unsigned char)c;
	return (b);
}
