/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorvarea <jorvarea@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 18:28:48 by jorvarea          #+#    #+#             */
/*   Updated: 2023/09/22 21:56:07 by jorvarea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main(int argc, char **argv)
{
	char c;
	char *str1;
	char *str2;
	int num, num1, num2;
	void *ptr1;
	void *ptr2;
	void *ptr3;
	int i;
	char **words;

	ptr2 = malloc(500*sizeof(char));
	ptr3 = malloc(500*sizeof(char));
	c = '\0';
	if (argc >= 2)
	{
		if (argv[1][0] == '0')
		{
			c = argv[2][0];
			printf("Alphabetic? %d\n", ft_isalpha(c));
			printf("Digit? %d\n", ft_isdigit(c));
			printf("Alphanumeric? %d\n", ft_isalnum(c));
			printf("Space? %d\n", ft_isspace(c));
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
			printf("The piece of string after the found substring is (size=5): %s\n", ft_strnstr(str1, str2, 5));
		}
		else if (argv[1][0] == '6')
		{
			str1 = argv[2];
			printf("Testing atoi...\n");
			printf("Number extracted: %d\n", ft_atoi(str1));
		}
		else if (argv[1][0] == '7')
		{
			printf("Testing memset...\n");
			printf("Character to write in memory: ");
			scanf(" %c", &c);
			printf("Size of memory to write: ");
			scanf(" %d", &num);
			ptr1 = malloc(num);
			printf("Memory: %s", ft_memset(ptr1, c, num));
			free(ptr1);
		}
		else if (argv[1][0] == '8')
		{
			printf("Testing bzero...\n");
			printf("Size of memory to write: ");
			scanf(" %d", &num);
			ptr1 = malloc(num);
			ft_bzero(ptr1, num);
			printf("Memory: %s", ptr1);
			free(ptr1);
		}
		else if (argv[1][0] == '9')
		{
			printf("Testing memcpy...\n");
			printf("String to copy: ");
			scanf(" %s", (char *)ptr2);
			printf("Size of memory to write: ");
			scanf(" %d", &num);
			ptr1 = malloc(num);
			printf("Destination memory: %s\n", ft_memcpy(ptr1, ptr2, num));
			free(ptr1);
		}
		else if (argv[1][0] == 'A')
		{
			printf("Testing memmove...\n");
			printf("String to copy: ");
			scanf(" %s", (char *)ptr2);
			printf("Size of memory to write: ");
			scanf(" %d", &num);
			ptr1 = malloc(num);
			printf("Destination memory: %s\n", ft_memmove(ptr1, ptr2, num));
			free(ptr1);
		}
		else if (argv[1][0] == 'B')
		{
			printf("Testing memchr...\n");
			printf("String to scan: ");
			scanf(" %s", (char *)ptr2);
			printf("Character to find: ");
			scanf(" %c", &c);
			printf("Length of bytes to search: ");
			scanf(" %d", &num);
			printf("Found: %s\n", ft_memchr(ptr2, c, num));
		}
		else if (argv[1][0] == 'C')
		{
			printf("Testing memcmp...\n");
			printf("First string: ");
			scanf(" %s", (char *)ptr2);
			printf("Second string: ");
			scanf(" %s", (char *)ptr3);
			printf("Number of characters to compare: ");
			scanf(" %d", &num);
			printf("Result: %d\n", ft_memcmp(ptr2, ptr3, num));
		}
		else if (argv[1][0] == 'D')
		{
			printf("Testing calloc...\n");
			printf("Size of each variable: ");
			scanf(" %d", &num1);
			printf("Number of variables: ");
			scanf(" %d", &num2);
			ptr1 = ft_calloc(num2, num1);
			i = 0;
			while (i < num1 * num2)
				printf("%c", ((unsigned char *)ptr1)[i++] + '0');
			free(ptr1);
		}
		else if (argv[1][0] == 'E')
		{
			printf("Testing strdup...\n");
			printf("String to copy: ");
			scanf(" %s", (char *)ptr2);
			ptr3 = ft_strdup((const char *)ptr2);
			printf("Copied string: %s\n", ptr3);
		}
		else if (argv[1][0] == 'F')
		{
			printf("Testing substr...\n");
			printf("String to get substring: ");
			scanf(" %s", (char *)ptr2);
			printf("Start of the substring: ");
			scanf(" %d", &num1);
			printf("Lenght of the substring: ");
			scanf(" %d", &num2);
			ptr3 = ft_substr(ptr2, num1, num2);
			printf("Copied string: %s\n", ptr3);
		}
		else if (argv[1][0] == 'G')
		{
			printf("Testing split...\n");
			printf("String to split: ");
			scanf(" %s", (char *)ptr2);
			printf("Splitting character: ");
			scanf(" %c", &c);
			words = ft_split((char const *)ptr2, c);
			printf("Splitted words: \n");
			i = 0;
			while (words[i])
			{
				printf("Word %d: %s\n", i + 1, words[i]);
				i++;
			}
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
		printf("6: ft_atoi.c\n");
		printf("7: ft_memset.c\n");
		printf("8: ft_bzero.c\n");
		printf("9: ft_memcpy.c\n");
		printf("A: ft_memmove.c\n");
		printf("B: ft_memchr.c\n");
		printf("C: ft_memcmp.c\n");
		printf("D: ft_calloc.c\n");
		printf("E: ft_strdup.c\n");
		printf("F: ft_substr.c\n");
		printf("G: ft_split.c\n");
		printf("##################################\n");
	}
	free(ptr2);
	free(ptr3);
	return (0);
}