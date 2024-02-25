/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_hex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorvarea <jorvarea@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 14:50:25 by jorvarea          #+#    #+#             */
/*   Updated: 2024/02/25 15:31:53 by jorvarea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static bool	is_hex(char c)
{
	return (ft_isdigit(c) || (c >= 'A' && c <= 'F') || (c >= 'a' && c <= 'f'));
}

static int	char2value(char c)
{
	int	value;

	value = -1;
	if (ft_isdigit(c))
		value = c - '0';
	if (ft_islowcase(c))
		value = 10 + c - 'a';
	if (ft_isupcase(c))
		value = 10 + c - 'A';
	return (value);
}

unsigned int	ft_atoi_hex(char *str)
{
	unsigned int	num;
	int				char_value;
	int				i;

	num = 0;
	i = 0;
	while (ft_isspace(str[i]))
		i++;
	if (ft_strncmp(&str[i], "0x", 2) == 0)
		i += 2;
	while (is_hex(str[i]))
	{
		char_value = char2value(str[i++]);
		if (char_value >= 0)
			num = num * 16 + (unsigned int)char_value;
	}
	return (num);
}
