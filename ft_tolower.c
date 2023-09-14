/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorvarea <jorvarea@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 21:04:09 by jorvarea          #+#    #+#             */
/*   Updated: 2023/09/14 19:35:15 by jorvarea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Converts an uppercase alphabetic character to its lowercase equivalent.
 *
 * @param c The character to be converted.
 * @return The lowercase equivalent of the input character if it's uppercase,
 *  or the input character itself if not.
 */
int	ft_tolower(int c)
{
	if (ft_isupcase(c))
		return (c + 32);
	else
		return (c);
}
