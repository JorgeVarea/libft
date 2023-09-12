# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jorvarea <jorvarea@student.42malaga.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/11 23:12:03 by jorvarea          #+#    #+#              #
#    Updated: 2023/09/12 18:37:36 by jorvarea         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			= libft.a
CC				= gcc
CFLAGS			= -Wall -Werror -Wextra
SOURCE_FILES	= $(wildcard ft_*.c)
OBJECT_FILES	= $(SOURCE_FILES:.c=.o)

all: $(NAME)
$(NAME): $(OBJECT_FILES)
	@ar -rcs $(NAME) $(OBJECT_FILES)
%.o: %.c libft.h
	@$(CC) $(CFLAGS) -c $< -o $@
clean:
	@rm -f $(OBJECT_FILES)
fclean: clean
	@rm -f $(NAME)
re: fclean all
