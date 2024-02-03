# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jorvarea <jorvarea@student.42malaga.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/11 23:12:03 by jorvarea          #+#    #+#              #
#    Updated: 2024/02/03 17:56:59 by jorvarea         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME				= libft.a
CC					= gcc
CFLAGS				= -Wall -Werror -Wextra
SOURCE_FILES   		= ft_isascii.c ft_lstadd_front.c ft_lstsize.c ft_putendl_fd.c ft_strlcpy.c \
					ft_swap_char.c ft_abs.c ft_isdigit.c ft_lstclear.c ft_max.c ft_putnbr_fd.c \
					ft_strlen.c ft_swap_int.c ft_atoi.c ft_islowcase.c ft_lstdelone.c ft_memchr.c \
					ft_putstr_fd.c ft_strmapi.c ft_uppercase.c ft_bzero.c ft_isprintable.c \
					ft_lstextract_first.c ft_memcmp.c ft_split.c ft_strncmp.c ft_strnstr.c \
					ft_calloc.c ft_isspace.c ft_lstextract_last.c ft_memcpy.c ft_strchr.c \
					ft_strrchr.c ft_count_digits.c ft_isupcase.c ft_lstiter.c ft_memmove.c \
					ft_strdup.c ft_strrev.c ft_isalnum.c ft_lowcase.c ft_lstmap.c ft_min.c \
					ft_strjoin.c ft_strtrim.c ft_isalpha.c ft_lstadd_back.c ft_lstnew.c \
					ft_putchar_fd.c ft_strlcat.c ft_substr.c ft_count_words.c ft_itoa.c \
					ft_lstlast.c ft_memset.c ft_striteri.c ft_strlcat.c
OBJECT_DIR 			= obj
OBJECT_FILES		= $(SOURCE_FILES:%.c=$(OBJECT_DIR)/%.o)

all: $(NAME)

$(NAME): $(OBJECT_FILES) libft.h
	@ar -rcs $(NAME) $(OBJECT_FILES)

$(OBJECT_DIR)/%.o: %.c
	@mkdir -p $(OBJECT_DIR)
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@rm -rf $(OBJECT_DIR)
	
fclean: clean
	@rm -f $(NAME)
	
re: fclean all

.PHONY: all clean fclean re