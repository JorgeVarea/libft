/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorvarea <jorvarea@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 17:40:04 by jorvarea          #+#    #+#             */
/*   Updated: 2024/02/03 17:29:00 by jorvarea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *str, char (*f)(unsigned int, char))
{
	char	*s_mapi;
	int		i;

	s_mapi = malloc(ft_strlen(str) + 1);
	if (!s_mapi)
		return (NULL);
	i = 0;
	while (str[i])
	{
		s_mapi[i] = f(i, str[i]);
		i++;
	}
	s_mapi[i] = '\0';
	return (s_mapi);
}
