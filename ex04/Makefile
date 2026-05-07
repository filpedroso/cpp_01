# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fpedroso <fpedroso@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/05/03 18:03:14 by fpedroso          #+#    #+#              #
#    Updated: 2026/05/03 18:07:26 by fpedroso         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = sed
CC = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98

FILES = main.cpp		\



OBJ = $(FILES:.cpp=.o)

%.o: %.cpp
	$(CC) $(CPPFLAGS) -c $< -o $@

$(NAME): $(OBJ)
	$(CC) $(CPPFLAGS) $(OBJ) -o $(NAME)


all: $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

val: all
	valgrind --leak-check=full --show-leak-kinds=all --trace-children=yes \
		--track-origins=yes --trace-children-skip=''*/bin/*,*/sbin/*'' \
		--track-fds=yes --keep-debuginfo=yes --tool=memcheck ./sed

.PHONY: all clean fclean re
