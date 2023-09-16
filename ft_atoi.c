/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorvarea <jorvarea@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 09:59:14 by jorvarea          #+#    #+#             */
/*   Updated: 2023/09/16 16:52:56 by jorvarea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Converts a string to an integer.
 *
 * This function takes a string `str` as input and converts it into an integer.
 * It skips leading white spaces, processes an optional sign ('+' or '-'), and
 * then converts the numeric characters into an integer until a non-numeric
 * character is encountered. It returns the resulting integer value.
 *
 * @param str The input string to convert to an integer.
 * @return The integer value represented by the input string.
 */
int	ft_atoi(const char *str)
{
	int	i;
	int	num;
	int	sign;

	num = 0;
	sign = 1;
	i = 0;
	while (ft_isspace(str[i]))
		i++;
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if (str[i] == '+')
	{
		sign = 1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
		num = num * 10 + (str[i++] - '0');
	return (num * sign);
}
