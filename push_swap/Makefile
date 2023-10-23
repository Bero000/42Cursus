# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: beeren <beeren@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/11 02:41:42 by beeren            #+#    #+#              #
#    Updated: 2023/10/17 19:06:53 by beeren           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = push_swap

BONUS_NAME = checker

CC = gcc 

CFLAGS = -Wall -Werror -Wextra

CFILES_1 = push_swap.c

CFILES_2 = function.c \
			function2.c \
			function3.c \
			rules_a.c \
			rules_b.c \
			utils.c \
			utils2.c
			

OBJS_1 = $(CFILES_1:.c=.o)

OBJS_2 = $(CFILES_2:.c=.o)


$(NAME): $(OBJS_1) $(OBJS_2)
	@$(CC) $(CFLAGS) $(OBJS_1) $(OBJS_2) -o $(NAME)
	@echo "\n\033[33mPush_swap is ready ✅\033[0m\n"


all: $(NAME)
	@echo "\n\033[33mAll files compiled successfully ✅\033[0m\n"

clean:
		@rm -f $(OBJS_1) $(OBJS_2)
		@echo "\n\033[33mObjects files deleted ✅\033[0m\n"

fclean: clean
		@rm -rf $(NAME) 
		@echo "\n\033[33mArchive file deleted ✅\033[0m\n"

re: fclean all

.phony: re fclean clean all