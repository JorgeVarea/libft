/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorvarea <jorvarea@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 18:13:02 by jorvarea          #+#    #+#             */
/*   Updated: 2023/09/25 18:35:02 by jorvarea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Applies a given function to each character of a string by index.
 *
 * This function iterates over the string 's', and for each character, 
 * it applies the function 'f'. Unlike many traditional string 
 * manipulation functions, this function allows for direct modification
 * of the string 's' since the function 'f' is provided a pointer 
 * to each character of 's'. The function 'f' takes the character's index
 * and a pointer to the character itself.
 *
 * @param s  The string on which the function 'f' should be applied.
 * @param f  The function to apply to each character of 's'. 
 *           It receives the index of the character and a pointer to 
 *           the character, allowing in-place modification.
 */
void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	int	i;

	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
