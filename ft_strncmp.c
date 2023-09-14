/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorvarea <jorvarea@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 19:20:39 by jorvarea          #+#    #+#             */
/*   Updated: 2023/09/14 19:33:07 by jorvarea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * Compare the first 'n' characters of two strings 's1' and 's2'
 * in a case-sensitive manner.
 *
 * This function compares the first 'n' characters of the strings 's1'
 * and 's2' and returns an integer value indicating their relationship:
 *
 * - If the first 'n' characters of 's1' and 's2' are equal, it returns 0.
 * - If 's1' is less than 's2', it returns a negative value.
 * - If 's1' is greater than 's2', it returns a positive value.
 *
 * @param s1  The first string to be compared.
 * @param s2  The second string to be compared.
 * @param n   The maximum number of characters to compare.
 *
 * @return    An integer less than, equal to, or greater than 0,
 * 			  depending on the comparison result.
 */
int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && i < n
		&& (unsigned char)s1[i] == (unsigned char)s2[i])
		i++;
	if (n == 0)
		return (0);
	else if (i == n)
		return ((unsigned char)s1[i - 1] - (unsigned char)s2[i - 1]);
	else
		return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
