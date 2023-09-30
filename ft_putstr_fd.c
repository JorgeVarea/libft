/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorvarea <jorvarea@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 21:05:35 by jorvarea          #+#    #+#             */
/*   Updated: 2023/09/30 21:30:41 by jorvarea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Writes a string to the given file descriptor.
 *
 * This function iteratively writes each character of the string
 * to the specified file descriptor until it reaches the string's
 * null terminator.
 *
 * @param str The string to be written.
 * @param fd The file descriptor to which the string will be written.
 */
void	ft_putstr_fd(char *str, int fd)
{
	int	i;

	i = 0;
	while (str[i])
		write(fd, &str[i++], 1);
}
