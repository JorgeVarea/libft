/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorvarea <jorvarea@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 20:35:45 by jorvarea          #+#    #+#             */
/*   Updated: 2024/02/03 17:33:40 by jorvarea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrev(char *str)
{
	int		i;
	int		j;
	size_t	size;

	size = ft_strlen(str);
	i = 0;
	j = size - 1;
	while (i < j)
	{
		ft_swap_char(&str[i], &str[j]);
		i++;
		j--;
	}
	return (str);
}
