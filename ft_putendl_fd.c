/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorvarea <jorvarea@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 21:08:23 by jorvarea          #+#    #+#             */
/*   Updated: 2023/09/30 21:30:52 by jorvarea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Writes a string followed by a newline to the given file descriptor.
 *
 * This function iteratively writes each character of the string
 * to the specified file descriptor until it reaches the string's
 * null terminator. After writing the string, a newline character
 * is added.
 *
 * @param str The string to be written.
 * @param fd The file descriptor to which the string followed by
 *           a newline will be written.
 */
void	ft_putendl_fd(char *str, int fd)
{
	int	i;

	i = 0;
	while (str[i])
		write(fd, &str[i++], 1);
	write(fd, "\n", 1);
}
