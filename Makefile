# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jorvarea <jorvarea@student.42malaga.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/11 23:12:03 by jorvarea          #+#    #+#              #
#    Updated: 2023/10/15 00:57:58 by jorvarea         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME				= libft.a
CC					= gcc
CFLAGS				= -Wall -Werror -Wextra
SOURCE_FILES   		= ft_strnstr.c \
                 	ft_isdigit.c \
                 	ft_putstr_fd.c \
                 	ft_strlcpy.c \
                 	ft_strlen.c \
					ft_memcmp.c \
					ft_putnbr_fd.c \
					ft_strchr.c \
					ft_striteri.c \
					ft_bzero.c \
					ft_strjoin.c \
					ft_isascii.c \
					ft_memcpy.c \
					ft_isprint.c \
					ft_putendl_fd.c \
					ft_toupper.c \
					ft_split.c \
					ft_strrchr.c \
					ft_isalpha.c \
					ft_memchr.c \
					ft_putchar_fd.c \
					ft_memset.c \
					ft_substr.c \
					ft_strncmp.c \
					ft_isupcase.c \
					ft_islowcase.c \
					ft_strmapi.c \
					ft_strtrim.c \
					ft_memmove.c \
					ft_count_words.c \
					ft_strlcat.c \
					ft_calloc.c \
					ft_strrev.c \
					ft_strdup.c \
					ft_atoi.c \
					ft_isalnum.c \
					ft_itoa.c \
					ft_isspace.c \
					ft_tolower.c
BONUS_SOURCE_FILES 	= ft_lstadd_front_bonus.c \
                     ft_lstdelone_bonus.c \
                     ft_lstadd_back_bonus.c \
                     ft_lstmap_bonus.c \
                     ft_lstclear_bonus.c \
                     ft_lstiter_bonus.c \
                     ft_lstlast_bonus.c \
                     ft_lstsize_bonus.c \
                     ft_lstnew_bonus.c
OBJECT_FILES		= $(SOURCE_FILES:.c=.o)
BONUS_OBJECT_FILES 	= $(BONUS_SOURCE_FILES:.c=.o)

all: $(NAME)

$(NAME): $(OBJECT_FILES) libft.h
	@ar -rcs $(NAME) $(OBJECT_FILES)

bonus: $(OBJECT_FILES) $(BONUS_OBJECT_FILES) libft.h
	@ar -rcs $(NAME) $(OBJECT_FILES) $(BONUS_OBJECT_FILES)

%.o: %.c
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@rm -f $(OBJECT_FILES) $(BONUS_OBJECT_FILES)
	
fclean: clean
	@rm -f $(NAME)
	
re: fclean all

rebonus: fclean bonus

.PHONY: all clean fclean re bonus
