/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorvarea <jorvarea@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 20:05:46 by jorvarea          #+#    #+#             */
/*   Updated: 2024/02/03 17:10:22 by jorvarea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void copy_forward(unsigned char *dest, const unsigned char *src, size_t n) 
{
    size_t i;

	i = 0;
    while (i < n) 
	{
        dest[i] = src[i];
        i++;
    }
}

static void copy_backward(unsigned char *dest, const unsigned char *src, size_t n) 
{
    while (n > 0) 
	{
        dest[n - 1] = src[n - 1];
        n--;
    }
}

void *ft_memmove(void *dest, const void *src, size_t n) 
{
    unsigned char *uc_dest = (unsigned char *)dest;
    const unsigned char *uc_src = (const unsigned char *)src;

    if (dest == NULL && src == NULL)
        return (NULL);
	uc_src = (const unsigned char *)src;
	uc_dest = (unsigned char *)dest;
    if (uc_src < uc_dest && uc_dest < uc_src + n)
        copy_backward(uc_dest, uc_src, n);
	else 
        copy_forward(uc_dest, uc_src, n);
    return dest;
}
