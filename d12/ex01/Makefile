# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tulenius <tulenius@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/07/22 13:21:23 by tulenius          #+#    #+#              #
#    Updated: 2021/07/22 13:22:45 by tulenius         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_cat
SOURCES = ./ft_cat.c


all: $(NAME)

$(NAME):
	gcc -Wall -Werror -Wextra -o $(NAME) $(SOURCES)

clean:
	/bin/rm -f $(OBJECTS)
	
fclean: clean
	/bin/rm -f $(NAME)
	
re: fclean all
