/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorvarea <jorvarea@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 20:05:46 by jorvarea          #+#    #+#             */
/*   Updated: 2023/09/16 20:24:05 by jorvarea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;

	if (dest == NULL && src == NULL)
		return (0);
	if (n != 0)
	{
		if (src < dest && dest < src + n)
		{
			i = n - 1;
			while (i >= 0)
			{
				((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
				i--;
			}
		}
		else
		{
			i = 0;
			while (i < n)
			{
				((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
				i++;
			}
		}
	}
	return (dest);
}
