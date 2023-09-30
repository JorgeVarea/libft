/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorvarea <jorvarea@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 20:48:45 by jorvarea          #+#    #+#             */
/*   Updated: 2023/09/30 21:11:20 by jorvarea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Writes a single character to the given file descriptor.
 *
 * @param c The character to be written.
 * @param fd The file descriptor to which the character will be written.
 */
void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
