/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorvarea <jorvarea@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 19:27:18 by jorvarea          #+#    #+#             */
/*   Updated: 2023/10/01 04:14:12 by jorvarea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Extracts a word from a string using a delimiter.
 *
 * This function identifies and extracts a word from the string 's'
 * starting from the current position up to the next occurrence of
 * the character 'c' or the end of the string. It allocates memory
 * for the word and returns a pointer to this newly created word.
 * The input pointer 's' is advanced to the character following
 * the word or delimiter.
 *
 * @param s  A pointer to the address of the current position
 * 				in the source string.
 *           The function modifies the address to which 's' points.
 * @param c  The character used as delimiter to identify the end of the word.
 *
 * @return   A pointer to the extracted word, or NULL
 * 				if memory allocation fails.
 */
static char	*ft_extract_word(char const **s, char c)
{
	char		*word_i;
	char		*word_start;
	const char	*str_i;

	str_i = *s;
	while (*str_i && *str_i != c)
		str_i++;
	word_start = malloc(str_i - *s + 1);
	if (!word_start)
		return (NULL);
	word_i = word_start;
	while (**s && **s != c)
		*word_i++ = *((*s)++);
	*word_i = '\0';
	if (**s)
		(*s)++;
	return (word_start);
}

/**
 * @brief Frees an array of words and returns a NULL pointer.
 *
 * This function iteratively frees each word in the array starting from the 
 * current word back to the beginning of the array. After all words have been 
 * freed, it also frees the memory allocated for the array itself.
 *
 * @param words        A pointer pointing to the current word or position in the 
 *                     words array.
 * @param words_start  A pointer to the start of the words array.
 *
 * @return   A NULL pointer, useful for returning from functions after cleanup.
 */
static void	*ft_free_words(char **words, char **words_start)
{
	while (words != words_start)
		free(*(--words));
	free(words_start);
	return (NULL);
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
	char	**words;
	char	**words_start;

	if (!s)
		return (NULL);
	words = malloc((ft_count_words(s, c) + 1) * sizeof(char *));
	if (!words)
		return (NULL);
	words_start = words;
	while (*s)
	{
		if (*s != c)
		{
			*words = ft_extract_word(&s, c);
			if (!*words)
				return (ft_free_words(words, words_start));
			words++;
		}
		else
			s++;
	}
	*words = NULL;
	return (words_start);
}
