/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorvarea <jorvarea@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 17:35:11 by jorvarea          #+#    #+#             */
/*   Updated: 2024/02/03 16:01:21 by jorvarea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	size_t	size;
	char	*copy;

	size = ft_strlen(str);
	copy = malloc((size + 1) * sizeof(char));
	if (copy)
		ft_strlcpy(copy, str, size + 1);
	return (copy);
}
