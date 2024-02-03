/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorvarea <jorvarea@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 16:45:25 by jorvarea          #+#    #+#             */
/*   Updated: 2024/02/03 17:12:04 by jorvarea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *ptr, int c, size_t size)
{
	unsigned char	*uc_ptr;
	unsigned char	uc_c;
	size_t			i;

	uc_ptr = (unsigned char *)ptr;
	uc_c = (unsigned char)c;
	i = 0;
	if (size != 0)
		while (i < size)
			uc_ptr[i++] = uc_c;
	return (ptr);
}
