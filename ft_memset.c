/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorvarea <jorvarea@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 16:45:25 by jorvarea          #+#    #+#             */
/*   Updated: 2024/02/13 14:04:29 by jorvarea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *pointer, int fill_character, size_t size)
{
	unsigned char	*uc_pointer;
	unsigned char	uc_fill_character;
	size_t			i;

	uc_pointer = (unsigned char *)pointer;
	uc_fill_character = (unsigned char)fill_character;
	i = 0;
	if (size != 0)
		while (i < size)
			uc_pointer[i++] = uc_fill_character;
	return (pointer);
}
