/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorvarea <jorvarea@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 19:13:34 by jorvarea          #+#    #+#             */
/*   Updated: 2023/09/19 20:18:10 by jorvarea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

/**
 * Allocates a block of memory for 'count' elements, each of 'size' bytes.
 * Initializes all bytes of the allocated memory to zero.
 *
 * @param count The number of elements to allocate.
 * @param size The size in bytes of each element.
 * @return A pointer to the allocated block of memory, or NULL on failure.
 */
void	*ft_calloc(size_t count, size_t size)
{
	size_t	total_size;
	void	*ptr;

	total_size = count * size;
	ptr = malloc(total_size);
	if (ptr != NULL)
		ft_memset(ptr, 0, total_size);
	return (ptr);
}
