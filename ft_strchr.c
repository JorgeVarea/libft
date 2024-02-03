/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorvarea <jorvarea@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 17:56:51 by jorvarea          #+#    #+#             */
/*   Updated: 2024/02/03 17:20:01 by jorvarea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strchr(const char *str, int c) 
{
    unsigned char uc_c = (unsigned char)c;

    while (*str != '\0') 
	{
        if ((unsigned char)*str == uc_c)
            return (char *)str;
        str++;
    }
    if (uc_c == '\0')
        return (char *)str;
    return NULL;
}
