/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorvarea <jorvarea@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 18:33:35 by jorvarea          #+#    #+#             */
/*   Updated: 2023/09/14 19:27:27 by jorvarea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * Checks if a given character is a printable ASCII character.
 *
 * @param c The character to be checked.
 * @return 1 if the character is a printable ASCII character (32-126),
 *  0 otherwise.
 */
int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	else
		return (0);
}
