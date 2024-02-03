/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_words.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorvarea <jorvarea@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 20:12:01 by jorvarea          #+#    #+#             */
/*   Updated: 2024/02/03 17:50:04 by jorvarea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_words(char const *str, char delimiter)
{
	int	word_count;

	word_count = 0;
	while (*str)
	{
		if (*str != delimiter)
		{
			word_count++;
			while (*str && *str != delimiter)
				str++;
		}
		else
			str++;
	}
	return (word_count);
}
