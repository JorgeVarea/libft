/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorvarea <jorvarea@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 20:17:16 by jorvarea          #+#    #+#             */
/*   Updated: 2023/09/24 21:25:21 by jorvarea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Determines the number of digits in the integer 'n'.
 *
 * This function calculates the number of digits required to represent the
 * integer 'n'. If 'n' is 0, it returns 1.
 *
 * @param n  The integer whose digits are to be counted.
 * @return   The number of digits in 'n'.
 */
static int	ft_number_digits(int n)
{
	int	i;

	if (n == 0)
		return (1);
	i = 0;
	if (n < 0)
		i++;
	while (n != 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

/**
 * Reverses the characters in a string 'str'.
 *
 * This function reverses the characters in the string 'str' in place.
 * If the string starts with a '-', the '-' is not reversed.
 *
 * @param str  The string to be reversed.
 * @return     Pointer to the reversed string.
 */
static char	*ft_rev_num(char *str)
{
	int		i;
	int		j;
	char	temp;

	if (str[0] == '-')
		i = 1;
	else
		i = 0;
	j = ft_strlen(str) - 1;
	while (i < j)
	{
		temp = str[i];
		str[i] = str[j];
		str[j] = temp;
		i++;
		j--;
	}
	return (str);
}

/**
 * Converts an integer to its string representation.
 *
 * This function creates and returns a newly allocated string 
 * that represents the given integer 'n'. The returned string 
 * takes into account negative values, adding a '-' prefix 
 * when necessary. Special cases, like when 'n' is '0', are 
 * also handled correctly.
 *
 * @param n  The integer value to be converted.
 *
 * @return   A pointer to the newly allocated string 
 *           representing the integer or NULL if memory 
 *           allocation fails.
 */
char	*ft_itoa(int n)
{
	char	*number;
	int		i;
	int		sign;

	sign = 1;
	number = malloc((ft_number_digits(n) + 1) * sizeof(char));
	if (!number)
		return (NULL);
	i = 0;
	if (n == 0)
		number[i++] = '0';
	else if (n < 0)
	{
		number[i++] = '-';
		sign = -1;
	}
	while (n != 0)
	{
		number[i] = sign * (n % 10) + '0';
		n = n / 10;
		i++;
	}
	number[i] = '\0';
	return (ft_rev_num(number));
}
