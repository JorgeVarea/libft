/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorvarea <jorvarea@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 17:54:58 by jorvarea          #+#    #+#             */
/*   Updated: 2024/02/03 17:32:51 by jorvarea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int		i;
	char	*last_position;

	i = 0;
	last_position = NULL;
	while (str[i] != '\0')
	{
		if ((unsigned char)str[i] == (unsigned char)c)
			last_position = &((char *)str)[i];
		i++;
	}
	if ((unsigned char)c == '\0')
		return (&((char *)str)[i]);
	else
		return (last_position);
}
