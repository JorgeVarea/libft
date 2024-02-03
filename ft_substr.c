/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorvarea <jorvarea@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 18:09:48 by jorvarea          #+#    #+#             */
/*   Updated: 2024/02/03 17:42:19 by jorvarea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *str, unsigned int start, size_t len)
{
	size_t	size_str;
	char	*substr;

	if (!str)
		return (NULL);
	size_str = ft_strlen(str);
	if (start >= size_str)
		return (ft_strdup(""));
	if (len > size_str - start)
		len = size_str - start;
	substr = malloc(len + 1);
	if (!substr)
		return (NULL);
	ft_strlcpy(substr, &str[start], len + 1);
	return (substr);
}
