# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aprunici <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/10/23 17:03:15 by aprunici          #+#    #+#              #
#    Updated: 2016/10/24 16:44:33 by aprunici         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

OBJ = *.o
SRC = *.c
NAME = libft.a
FLAGS = -Wall -Werror -Wextra -c

all: $(NAME)

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

$(OBJ):
	gcc $(FLAGS) $(SRC)

clean:
	rm -rf *.o

fclean: clean
	rm -rf $(NAME)

re: fclean all
