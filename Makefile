# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jorvarea <jorvarea@student.42malaga.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/11 23:12:03 by jorvarea          #+#    #+#              #
#    Updated: 2023/11/14 20:46:12 by jorvarea         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME				= libft.a
CC					= gcc
CFLAGS				= -Wall -Werror -Wextra
SOURCE_FILES   		= $(wildcard ft_*.c)
BONUS_SOURCE_FILES 	= $(wildcard ft_*_bonus.c)
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
