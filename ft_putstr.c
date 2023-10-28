/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorvarea <jorvarea@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 12:55:25 by jorvarea          #+#    #+#             */
/*   Updated: 2023/10/28 13:01:55 by jorvarea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Writes a string to the standard output (file descriptor 1).
 *
 * This function iteratively writes each character of the input string
 * to the standard output using the write system call. It continues
 * writing characters until it reaches the end of the string (null
 * terminator) or until a write error occurs.
 *
 * The function keeps track of the total number of bytes successfully
 * written to the standard output. If a write error occurs at any point
 * (indicated by write returning -1 or 0), the function stops the
 * iteration and sets the total bytes count to -1, indicating an error.
 *
 * @param str The string to be written to the standard output. The
 *            string should be null-terminated.
 * @return The total number of bytes written to the standard output. If
 *         a write error occurs, the function returns -1.
 */
int	ft_putstr(char *str)
{
	int	i;
    int bytes_total_count;
    int bytes_written;

	i = 0;
    bytes_total_count = 0;
	while (str[i] && bytes_written > 0)
    {
		bytes_written = write(1, &str[i++], 1);
        bytes_total_count += bytes_written;
    }
    if (bytes_written <= 0)
        bytes_total_count = -1;
    return (bytes_total_count);
}
