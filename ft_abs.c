/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_abs.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorvarea <jorvarea@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 23:36:57 by jorvarea          #+#    #+#             */
/*   Updated: 2023/10/28 23:38:23 by jorvarea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Computes the absolute value of an integer.
 * 
 * @param n The integer of which to calculate the absolute value.
 * @return The absolute value of `n`. If `n` is non-negative, the function 
 *         returns `n` itself. If `n` is negative, the function returns `-n`.
 */
int	ft_abs(int n)
{
	if (n < 0)
		n = -n;
	return (n);
}
