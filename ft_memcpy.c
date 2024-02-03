/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorvarea <jorvarea@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 18:13:50 by jorvarea          #+#    #+#             */
/*   Updated: 2024/02/03 17:01:03 by jorvarea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	const unsigned char	*uc_src;
	unsigned char		*uc_dest;
	size_t				i;

	uc_src = (const unsigned char *)src;
	uc_dest = (unsigned char *)dest;
	i = 0;
	while (i < n)
	{
		uc_dest[i] = uc_src[i];
		i++;
	}
	return (dest);
}
