# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: adidion <adidion@student.s19.be>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/13 14:35:05 by adidion           #+#    #+#              #
#    Updated: 2022/01/27 12:03:38 by adidion          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CXX = clang++

CXXFLAGS = -Wall -Wextra -Werror -std=c++98

NAME =	ex03

SRCS =	main.cpp\
		Fixed.cpp\
		bsp.cpp\
		Point.cpp\

OBJS = $(SRCS:.cpp=.o)

all : $(NAME)

$(NAME):	$(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME) $(OBJS)

re: fclean all

.PHONY: re bonus clean fclean all