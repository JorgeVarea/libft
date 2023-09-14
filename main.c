/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorvarea <jorvarea@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 18:28:48 by jorvarea          #+#    #+#             */
/*   Updated: 2023/09/14 19:49:14 by jorvarea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main(int argc, char **argv)
{
	char c;
	char *str1;
	char *str2;

	if (argc >= 2)
	{
		if (argv[1][0] == '0')
		{
			c = argv[2][0];
			printf("Alphabetic? %d\n", ft_isalpha(c));
			printf("Digit? %d\n", ft_isdigit(c));
			printf("Alphanumeric? %d\n", ft_isalnum(c));
			printf("ASCII? %d\n", ft_isascii(c));
			printf("Printable? %d\n", ft_isprint(c));
			printf("Uppercase: %c\n", ft_toupper(c));
			printf("Lowercase: %c\n", ft_tolower(c));
		}
		else if (argv[1][0] == '1')
		{
			str1 = argv[2];
			str2 = argv[3];
			printf("Testing strlcpy...\n");
			printf("-Before-\n");
			printf("src lenght %zu\n", ft_strlen(str1));
			printf("dest lenght %zu\n", ft_strlen(str2));
			printf("src %s\n", str1);
			printf("dest %s\n", str2);
			printf("-After (size=5)-\n");
			printf("src lenght %zu\n", ft_strlcpy(str2, str1, 5));
			printf("src %s\n", str1);
			printf("dest %s\n", str2);
		}
		else if (argv[1][0] == '2')
		{
			str1 = argv[2];
			str2 = argv[3];
			printf("Testing strlcat...\n");
			printf("-Before-\n");
			printf("src lenght %zu\n", ft_strlen(str1));
			printf("dest lenght %zu\n", ft_strlen(str2));
			printf("src %s\n", str1);
			printf("dest %s\n", str2);
			printf("-After (size=10)-\n");
			printf("lenght tried2create %zu\n", ft_strlcat(str2, str1, 10));
			printf("src %s\n", str1);
			printf("dest %s\n", str2);
		}
		else if (argv[1][0] == '3')
		{
			str1 = argv[2];
			str2 = argv[3];
			printf("Testing strchr...\n");
			printf("The piece of string after the first ocurrence of the character is: %s\n", ft_strchr(str1, str2[0]));
			printf("Testing strrchr...\n");
			printf("The piece of string after the last ocurrence of the character is: %s\n", ft_strrchr(str1, str2[0]));
		}
		else if (argv[1][0] == '4')
		{
			str1 = argv[2];
			str2 = argv[3];
			printf("Testing strncmp...\n");
			printf("Comparison result (size=5): %d\n", ft_strncmp(str1, str2, 5));
		}
		else if (argv[1][0] == '5')
		{
			str1 = argv[2];
			str2 = argv[3];
			printf("Testing strnstr...\n");
			printf("The piece of string after the found substring is (size=10): %s\n", ft_strnstr(str1, str2, 10));
		}
	}
	else
	{
		printf("###################################\n");
		printf("Welcome to the test lab for libft.a\n");
		printf("These are the available modes:\n");
		printf("0: ft_is*.c, to*.c\n");
		printf("1: ft_strlcpy.c\n");
		printf("2: ft_strlcat.c\n");
		printf("3: ft_strchr.c & ft_strrchr.c\n");
		printf("4: ft_strncmp.c\n");
		printf("5: ft_strnstr.c\n");
		printf("##################################\n");
	}
	return (0);
}