/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_words.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorvarea <jorvarea@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 20:12:01 by jorvarea          #+#    #+#             */
/*   Updated: 2023/09/22 20:13:53 by jorvarea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * Count the number of words in a string separated by a given character.
 *
 * @param s The string to be scanned.
 * @param c The delimiter character.
 * @return The number of words in the string separated by the delimiter.
 */
int	ft_count_words(char const *s, char c)
{
	int	i;
	int	word_count;

	word_count = 0;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			word_count++;
			while (s[i] != c && s[i] != '\0')
				i++;
		}
		else
			i++;
	}
	return (word_count);
}
