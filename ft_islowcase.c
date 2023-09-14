/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_islowcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorvarea <jorvarea@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 20:59:05 by jorvarea          #+#    #+#             */
/*   Updated: 2023/09/14 19:26:37 by jorvarea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * Checks if a given character is a lowercase alphabetic character.
 *
 * @param c The character to be checked.
 * @return 1 if the character is a lowercase alphabetic character (a-z),
 *  0 otherwise.
 */
int	ft_islowcase(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
