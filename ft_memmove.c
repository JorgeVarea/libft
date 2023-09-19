/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorvarea <jorvarea@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 20:05:46 by jorvarea          #+#    #+#             */
/*   Updated: 2023/09/19 18:35:18 by jorvarea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Copy memory area from source to destination, even if they overlap.
 *
 * This function copies 'n' bytes from 'src' to 'dest'. It handles overlapping
 * memory areas correctly by copying from the end of 'src' to the end of 'dest'
 * when 'src' and 'dest' overlap. The behavior is undefined if 'src' and 'dest'
 * are both NULL or if 'n' is zero.
 *
 * @param dest Pointer to the destination memory area.
 * @param src  Pointer to the source memory area.
 * @param n    Number of bytes to copy.
 *
 * @return Pointer to the destination memory area ('dest').
 */
void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;

	if (dest == NULL && src == NULL)
		return (0);
	if (n != 0)
	{
		i = 0;
		while (i < n)
		{
			if (src < dest && dest < src + n)
				((unsigned char *)dest)[n - i - 1] = ((unsigned char *)src)[n
					- i - 1];
			else
				((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
			i++;
		}
	}
	return (dest);
}
