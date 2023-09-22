/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorvarea <jorvarea@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 19:27:18 by jorvarea          #+#    #+#             */
/*   Updated: 2023/09/22 22:14:44 by jorvarea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_word_lenght(char const *s, char c, int *i)
{
	int	j;

	j = 0;
	while (s[*i + j] != c && s[*i + j] != '\0')
		j++;
	*i = *i + j;
	return (j);
}

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
