/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorvarea <jorvarea@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 19:27:18 by jorvarea          #+#    #+#             */
/*   Updated: 2024/02/03 17:14:40 by jorvarea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_extract_word(char const **str, char c)
{
	char		*word_i;
	char		*word_start;
	const char	*str_i;

	str_i = *str;
	while (*str_i && *str_i != c)
		str_i++;
	word_start = malloc(str_i - *str + 1);
	if (!word_start)
		return (NULL);
	word_i = word_start;
	while (**str && **str != c)
		*word_i++ = *((*str)++);
	*word_i = '\0';
	if (**str)
		(*str)++;
	return (word_start);
}

static void	*ft_free_words(char **words, char **words_start)
{
	while (words != words_start)
		free(*(--words));
	free(words_start);
	return (NULL);
}

char	**ft_split(char const *str, char c)
{
	char	**words;
	char	**words_start;

	if (!str)
		return (NULL);
	words = malloc((ft_count_words(str, c) + 1) * sizeof(char *));
	if (!words)
		return (NULL);
	words_start = words;
	while (*str)
	{
		if (*str != c)
		{
			*words = ft_extract_word(&str, c);
			if (!*words)
				return (ft_free_words(words, words_start));
			words++;
		}
		else
			str++;
	}
	*words = NULL;
	return (words_start);
}
