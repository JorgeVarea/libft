/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorvarea <jorvarea@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 18:44:38 by jorvarea          #+#    #+#             */
/*   Updated: 2024/02/03 17:01:43 by jorvarea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *ptr1, const void *ptr2, size_t n)
{
	const unsigned char *uc_ptr1;
    const unsigned char *uc_ptr2;
	size_t	i;

	uc_ptr1 = (const unsigned char *)ptr1;
	uc_ptr2 = (const unsigned char *)ptr2;
	i = 0;
	while (i < n)
	{
        if (uc_ptr1[i] != uc_ptr2[i])
            return uc_ptr1[i] - uc_ptr2[i];
		i++;
    }
    return (0);
}
