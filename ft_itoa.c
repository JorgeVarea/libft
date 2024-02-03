/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorvarea <jorvarea@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 20:17:16 by jorvarea          #+#    #+#             */
/*   Updated: 2024/02/03 16:04:20 by jorvarea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_rev_num(char *str)
{
	int		i;
	int		j;

	i = 0;
	if (str[0] == '-')
		i++;
	j = ft_strlen(str) - 1;
	while (i < j)
	{
		ft_swap_char(&str[i], &str[j]);
		i++;
		j--;
	}
	return (str);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		i;

	if (n == 0)
		return (ft_strdup("0"));
	else if (n == INT_MIN)
		return (ft_strdup("-2147483648"));
	str = malloc((ft_count_digits(n) + 2) * sizeof(char));
	if (!str)
		return (NULL);
	i = 0;
	if (n < 0)
	{
		str[i++] = '-';
		n = -n;	
	}
	while (n > 0)
	{
		str[i++] = n % 10 + '0';
		n = n / 10;
	}
	str[i] = '\0';
	return (ft_rev_num(str));
}
