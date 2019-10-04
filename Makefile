# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: akigler <akigler@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/09/18 15:40:29 by akigler           #+#    #+#              #
#    Updated: 2019/10/04 14:21:00 by akigler          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = *.c

HEADERS = *.h

FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
	gcc -c $(FLAGS) -I$(HEADERS) $(SRC)
	ar rc $(NAME) *.o

compile: FLAGS=-Wall -Wextra
compile:
	gcc -g $(FLAGS) $(SRC)

clean:
	/bin/rm -f *.o

fclean: clean
	/bin/rm -f $(NAME)


re: fclean all