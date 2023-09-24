/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorvarea <jorvarea@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 20:35:45 by jorvarea          #+#    #+#             */
/*   Updated: 2023/09/24 21:00:28 by jorvarea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Reverses a null-terminated string 'str' in place.
 *
 * This function takes a string as input, calculates its length, and then
 * iteratively swaps the characters in the string, starting from the outermost
 * characters and moving inwards,
	until the entire string is reversed. It returns
 * the pointer to the reversed string.
 *
 * @param str  The null-terminated string to be reversed.
 * @return     Pointer to the reversed string.
 */
char	*ft_strrev(char *str)
{
	int		i;
	int		j;
	size_t	size;
	char	temp;

	size = ft_strlen(str);
	i = 0;
	j = size - 1;
	while (i < j)
	{
		temp = str[i];
		str[i] = str[j];
		str[j] = temp;
		i++;
		j--;
	}
	return (str);
}
