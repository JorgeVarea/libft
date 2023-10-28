/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorvarea <jorvarea@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 12:19:29 by jorvarea          #+#    #+#             */
/*   Updated: 2023/10/28 12:26:21 by jorvarea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Writes a single character to the standard output.
 *
 * This function writes the character passed as a parameter to the
 * standard output, which is typically the terminal. It uses the
 * write system call to perform the output operation.
 *
 * @param c The character to be written to the standard output.
 * @return On success, the number of bytes written is returned, which
 *         is always 1 in this case since a single character is written.
 *         On error, -1 is returned, and errno is set appropriately.
 */
int	ft_putchar(char c)
{
	return (write(1, &c, 1));
}
