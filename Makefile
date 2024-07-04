# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: adshafee <adshafee@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/05 02:03:07 by adshafee          #+#    #+#              #
#    Updated: 2024/07/05 02:03:08 by adshafee         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
CFLAGS = -Wall -Wextra -Werror

SRC = main.c sort.c utilities1.c utilities2.c rotations1.c rotations2.c ft_lstadd_back.c ft_lstnew.c ft_memcpy.c ft_strlen.c \
		ft_lstadd_front.c ft_lstprint.c ft_putstr.c ft_substr.c\
		ft_atoi.c ft_lstlast.c ft_lstsize.c ft_split.c \

OBJ = $(SRC:.c=.o)

NAME = push_swap

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) -o $@ $^

%.o: %.CC
	$(CC) $(CFLAGS) -c -o $@ $<

clean:
	rm -f $(OBJ)

fclean: clean
	# rm *.out
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re