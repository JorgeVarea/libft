/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorvarea <jorvarea@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 17:54:58 by jorvarea          #+#    #+#             */
/*   Updated: 2023/09/13 19:30:37 by jorvarea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strrchr(char *str, int c)
{
	int		i;
	char	*last_position;

	i = 0;
	last_position = NULL;
	while (str[i] != '\0')
	{
		if ((unsigned char)str[i] == (unsigned char)c)
			last_position = &str[i];
		i++;
	}
	if (c == '\0')
		return (&str[i]);
	else
		return (last_position);
}
