/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorvarea <jorvarea@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 19:27:18 by jorvarea          #+#    #+#             */
/*   Updated: 2023/09/24 18:29:49 by jorvarea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Determines the length of a word in a string.
 *
 * This function calculates the length of a word (sequence of characters
 * delimited by the character 'c') starting from the index pointed to by 'i'
 * in the string 's'. It also updates the value of 'i' to point to the end of
 * the word.
 *
 * @param s  The string containing the word.
 * @param c  The character used as delimiter.
 * @param i  Pointer to the starting index of the word.
 *
 * @return   Length of the word.
 */
static int	ft_word_lenght(char const *s, char c, int *i)
{
	int	j;

	j = 0;
	while (s[*i + j] != c && s[*i + j] != '\0')
		j++;
	*i = *i + j;
	return (j);
}

/**
 * Splits a string into an array of words based on a delimiter.
 *
 * This function divides the string 's' into multiple words separated
 * by the character 'c' and returns an array of those words.
 *
 * @param s  The source string.
 * @param c  The character used as delimiter.
 *
 * @return   A pointer to an array containing all the words, or NULL
 *           if memory allocation fails.
 */
char	**ft_split(char const *s, char c)
{
	int		i;
	int		word_lenght;
	int		word_count;
	char	**words;

	if (!s)
		return (NULL);
	words = malloc((ft_count_words(s, c) + 1) * sizeof(char *));
	if (!words)
		return (NULL);
	word_count = 0;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			word_lenght = ft_word_lenght(s, c, &i);
			words[word_count++] = ft_substr(s, i - word_lenght, word_lenght);
			if (!words[word_count - 1])
				return (NULL);
		}
		else
			i++;
	}
	words[word_count] = NULL;
	return (words);
}
