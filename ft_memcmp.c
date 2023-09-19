/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorvarea <jorvarea@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 18:44:38 by jorvarea          #+#    #+#             */
/*   Updated: 2023/09/19 19:12:23 by jorvarea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Compare two memory areas byte by byte.
 *
 * This function compares the first 'n' bytes of memory pointed to by 's1' and
 * 's2'. It returns an integer less than, equal to, or greater than zero if the
 * first differing byte in 's1' is less than, equal to, or greater than the
 * corresponding byte in 's2'. If 'n' is zero, the function always returns zero.
 *
 * @param s1 Pointer to the first memory area.
 * @param s2 Pointer to the second memory area.
 * @param n  Number of bytes to compare.
 *
 * @return An integer indicating the comparison result.
 */
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && ((unsigned char *)s1)[i] == ((unsigned char *)s2)[i])
		i++;
	if (n == 0)
		return (0);
	else if (i == n)
		return (((unsigned char *)s1)[i - 1] - ((unsigned char *)s2)[i - 1]);
	else
		return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
}
