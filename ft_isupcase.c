/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isupcase.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorvarea <jorvarea@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 20:59:09 by jorvarea          #+#    #+#             */
/*   Updated: 2023/09/14 19:27:33 by jorvarea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * Checks if a given character is an uppercase alphabetic character.
 *
 * @param c The character to be checked.
 * @return 1 if the character is an uppercase alphabetic character (A-Z),
 *  0 otherwise.
 */
int	ft_isupcase(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
