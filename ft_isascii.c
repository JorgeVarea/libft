/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorvarea <jorvarea@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 18:26:14 by jorvarea          #+#    #+#             */
/*   Updated: 2023/09/14 18:38:32 by jorvarea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * Checks if a given character is a valid ASCII character.
 *
 * @param c The character to be checked.
 * @return 1 if the character is a valid ASCII character (0-127), 0 otherwise.
 */
int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	else
		return (0);
}
