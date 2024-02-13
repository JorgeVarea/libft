/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorvarea <jorvarea@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 19:42:11 by jorvarea          #+#    #+#             */
/*   Updated: 2024/02/13 17:47:53 by jorvarea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (to_find[0] == '\0')
		return ((char *)str);
	while (str[i] != '\0' && i < n)
	{
		if (str[i] == to_find[0])
		{
			j = 0;
			while (i + j < n && to_find[j] && str[i + j] && str[i
					+ j] == to_find[j])
				j++;
			if (to_find[j] == '\0')
				return (&((char *)str)[i]);
		}
		i++;
	}
	return (NULL);
}
