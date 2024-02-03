/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorvarea <jorvarea@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 18:27:42 by jorvarea          #+#    #+#             */
/*   Updated: 2024/02/03 16:56:29 by jorvarea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *ptr, int c, size_t n)
{
	const unsigned char *uc_ptr;
	unsigned char uc_c;

	uc_ptr = (const unsigned char *)ptr;
	uc_c = (unsigned char)c;
    while (n--) 
	{
        if (*uc_ptr == uc_c)
            return ((void *)uc_ptr);
        uc_ptr++;
    }
    return (NULL);
}
