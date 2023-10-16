# Libft

This is my personal library of commonly used C functions for the 42 curriculum.

## Overview

`libft` stands for "Library Functions". The aim of this project is to code a C library regrouping usual functions that you'll be allowed to use in all your other projects.

## Functions

### Part 1 - Libc Functions

In this section, I've recreated some of the standard C library functions:

- Memory functions: `memset`, `bzero`, `memcpy`, `memccpy`, `memmove`, `memchr`, `memcmp`
- String manipulation and examination: `strlen`, `strlcpy`, `strlcat`, `strchr`, `strrchr`, `strnstr`, `strncmp`
- Character checks: `isdigit`, `isalpha`, `isalnum`, `isascii`, `isprint`, `isspace`
- ASCII conversions: `toupper`, `tolower`
- Memory allocation: `calloc`
- String duplication: `strdup`
- Other: `atoi`

### Part 2 - Additional Functions

These are functions that aren't in the standard C library but are useful for various tasks:

- `ft_substr`: Extract substring from string.
- `ft_strjoin`: Concatenate two strings.
- `ft_strtrim`: Trim characters from beginning and end of string.
- `ft_split`: Split a string using a character as a delimiter.
- `ft_itoa`: Convert integer to string.
- `ft_strmapi`: Apply function to each character of a string.
- `ft_count_words`: Count the number of words in a given string
- `ft_strrev`: Reverses a string
- Character output to a file: `ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, `ft_putnbr_fd`
- Other: `islowcase`, `isupcase`

### Part 3 - Bonus Functions

If you've decided to work on the bonus, these functions usually deal with manipulating linked lists.

- `ft_lstnew`: Create a new list.
- `ft_lstadd_front`: Add a new element to the start of the list.
- `ft_lstadd_back`: Add a new element at the end of the list
- `ft_lstsize`: Returns the size of a list
- `ft_lstclear`: Clear the contents of a list
- `ft_lstdelone`: Delete and frees a single node of a list
- `ft_lstiter`: Iterates over a list and applies a given function to it
- `ft_lstlast`: Returns the last element of a list
- `ft_lstmap`: Maps the list to another one using a given function

### Part 4 - Testing programs

You can use `main.c` and `main_bonus.c` as testing programs for the functions in the library

## Usage

To compile the library, run:

```make```

or if you want to include the bonus functions as well, run instead

```make bonus```

This will produce a `libft.a` static library file. To use the library in your project, include the header (`libft.h`) in your source files and link against the library when compiling.
