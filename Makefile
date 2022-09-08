# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cportuon <cportuon@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/07 18:11:35 by cportuon          #+#    #+#              #
#    Updated: 2022/09/08 13:23:32 by cportuon         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = ft_isalnum.c

NAME = libft.a

all: ${NAME}							#ejecuta por defecto

${NAME}: comp							#compila los .o con la libreria
	@ar rcs ${NAME} *.o
	
comp:
	@gcc -c ${SRC}

clean:									#borra lo que creas
	@rm -fr *.o
	
fclean: clean

.PHONY: fclean clean
