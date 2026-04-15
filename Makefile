# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ecakiray <ecakiray@student.42heilbronn.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/04/15 14:44:59 by ecakiray          #+#    #+#              #
#    Updated: 2026/04/15 20:29:33 by ecakiray         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
SRCS = ft_isalnum.c ft_isalpha.c ft_isdigit.c ft_isascii.c ft_isprint.c ft_strlen.c
HDRS = libft.h
OBJS = $(SRCS:.c=.o)
FLAGS = -Wall -Werror -Wextra
ARFL = ar -rcs
NAME = libft.a

TEST = test.out

all: $(NAME)

$(NAME): $(OBJS)
	$(ARFLGS) $(NAME) $(OBJS)

$(OBJS): $(HDRS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

test: $(SRCS) test.c
	$(CC) $(CFLAGS) $(SRCS) test.c -o $(TEST)

tclean:
	rm -f $(TEST)
	