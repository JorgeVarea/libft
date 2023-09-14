/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorvarea <jorvarea@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 20:52:31 by jorvarea          #+#    #+#             */
/*   Updated: 2023/09/14 19:35:24 by jorvarea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Converts a lowercase alphabetic character to its uppercase equivalent.
 *
 * @param c The character to be converted.
 * @return The uppercase equivalent of the input character if it's lowercase, 
 * or the input character itself if not.
 */

int	ft_toupper(int c)
{
	if (ft_islowcase(c))
		return (c - 32);
	else
		return (c);
}
