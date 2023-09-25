/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorvarea <jorvarea@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 17:40:04 by jorvarea          #+#    #+#             */
/*   Updated: 2023/09/25 18:20:06 by jorvarea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Applies a given function to each character of a string, 
 * creating a new string as a result.
 *
 * This function iterates over the string 's', and for each character, 
 * it applies the function 'f', which takes in an index and a character, 
 * and returns a new character.
 * The resulting characters are placed in a new dynamically allocated string 
 * 's_mapi', which is then returned.
 *
 * @param s  The source string to which the function 'f' should be applied.
 * @param f  The function to apply to each character of 's'. 
 *           The function takes in the character's index and 
 *           the character itself, and returns a new character.
 *
 * @return   A new string created by applying 'f' to each character of 's'. 
 *           If memory allocation fails, returns NULL.
 */
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*s_mapi;
	int		i;

	s_mapi = malloc(ft_strlen((char *)s) + 1);
	if (!s_mapi)
		return (NULL);
	i = 0;
	while (s[i])
	{
		s_mapi[i] = f(i, s[i]);
		i++;
	}
	s_mapi[i] = '\0';
	return (s_mapi);
}
