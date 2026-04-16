# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ecakiray <ecakiray@student.42heilbronn.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/04/15 14:44:59 by ecakiray          #+#    #+#              #
#    Updated: 2026/04/16 20:32:08 by ecakiray         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
SRCS = ft_isalnum.c ft_isalpha.c ft_isdigit.c ft_isascii.c ft_isprint.c \
		ft_strlen.c ft_strlcpy.c ft_strlcat.c ft_strchr.c ft_strrchr.c ft_strncmp.c ft_strnstr.c \
		ft_bzero.c ft_toupper.c ft_tolower.c  ft_atoi.c \
		ft_memset.c ft_memcpy.c
HDRS = libft.h
OBJS = $(SRCS:.c=.o)
FLAGS = -Wall -Werror -Wextra
ARFL = ar -rcs
NAME = libft.a
LIBFT = -L. -lft
TEST = test.out

all: $(NAME)

$(NAME): $(OBJS)
	$(ARFL) $(NAME) $(OBJS)

$(OBJS): $(HDRS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

test: $(NAME) test.c
	$(CC) $(CFLAGS) test.c $(LIBFT)  -o $(TEST)

tclean: fclean
	rm -f $(TEST)
	