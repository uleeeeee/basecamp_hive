# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tulenius <tulenius@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/07/19 09:19:08 by tulenius          #+#    #+#              #
#    Updated: 2021/07/20 16:54:43 by tulenius         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a 

CC = gcc -Wall -Wextra -Werror 
RM = rm -f

HEADERFOLDER = ./includes/
SOURCEFILES = ./srcs/ft_putchar.c ./srcs/ft_putstr.c ./srcs/ft_strlen.c\
srcs/ft_strcmp.c srcs/ft_swap.c

OBJECTFILES = ./srcs/ft_putchar.o ./srcs/ft_putstr.o ./srcs/ft_strlen.o\
 ./srcs/ft_strcmp.o ./srcs/ft_swap.o


ALL : $(NAME)

$(NAME) : $(OBJECTFILES) 
		ar rc $(NAME) $(OBJECTFILES)
		ranlib $(NAME)

$(OBJECTFILES) : $(SOURCEFILES)
	$(CC) -o $@ -c $< -I $(HEADERFOLDER)


clean:
		rm $(OBJECTFILES)

fclean:
			rm -f $(NAME)

re: fclean all
