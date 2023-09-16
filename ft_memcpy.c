/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorvarea <jorvarea@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 18:13:50 by jorvarea          #+#    #+#             */
/*   Updated: 2023/09/16 20:02:58 by jorvarea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Copy memory area from source to destination.
 *
 * This function copies 'n' bytes from the memory location pointed to by 'src'
 * to the memory location pointed to by 'dest'. It returns a pointer to 'dest'.
 *
 * @param dest  A pointer to the destination memory location.
 * @param src   A pointer to the source memory location.
 * @param n     The number of bytes to copy.
 * @return      A pointer to the destination memory location ('dest').
 */
void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	if (dest == NULL && src == NULL)
		return (0);
	i = 0;
	if (n != 0)
	{
		while (i < n)
		{
			((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
			i++;
		}
	}
	return (dest);
}
