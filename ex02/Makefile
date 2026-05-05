# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fpedroso <fpedroso@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/05/05 13:26:47 by fpedroso          #+#    #+#              #
#    Updated: 2026/05/05 13:26:47 by fpedroso         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = hi
CC = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98

FILES = main.cpp

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

.PHONY: all clean fclean re
