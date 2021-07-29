# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tulenius <tulenius@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/07/22 11:15:20 by tulenius          #+#    #+#              #
#    Updated: 2021/07/22 16:40:59 by tulenius         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file
SOURCES = ./ft_display_file.c


all: $(NAME)

$(NAME):
	gcc -Wall -Werror -Wextra -o $(NAME) $(SOURCES)

clean:
	/bin/rm -f
	
fclean: clean
	/bin/rm -f $(NAME)
	
re: fclean all
