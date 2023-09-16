/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorvarea <jorvarea@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 18:01:56 by jorvarea          #+#    #+#             */
/*   Updated: 2023/09/16 18:35:06 by jorvarea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Set memory to zero (null bytes).
 *
 * This function sets the first 'size' bytes of the memory pointed to by 'b'
 * to zero (null bytes). It is commonly used to initialize or clear memory
 * regions.
 *
 * @param b     A pointer to the memory region to be zeroed.
 * @param size  The number of bytes to set to zero.
 */
void	ft_bzero(void *b, size_t size)
{
	size_t	i;

	i = 0;
	if (size != 0)
		while (i < size)
			((unsigned char *)b)[i++] = '\0';
}
