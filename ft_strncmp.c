/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorvarea <jorvarea@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 19:20:39 by jorvarea          #+#    #+#             */
/*   Updated: 2024/02/03 17:31:15 by jorvarea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strncmp(const char *str1, const char *str2, size_t n) 
{
    size_t i = 0;

    if (n == 0)
        return 0;
    while (str1[i] && str2[i] && str1[i] == str2[i] && i < n - 1)
        i++;
    return (unsigned char)str1[i] - (unsigned char)str2[i];
}
