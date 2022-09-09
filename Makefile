# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cportuon <cportuon@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/07 18:11:35 by cportuon          #+#    #+#              #
#    Updated: 2022/09/09 12:34:32 by cportuon         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#Variables
NAME   = libft.a

SRC    = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
	ft_strlen.c ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c \
	ft_strchr.c ft_strrchr.c
# ¿Se puede sustituir por¿ --> %o : %c
#									gcc -c -Wall -Wextra -Werror $^-o $@

OBJTS  = $(SRC:.c=.o)

CC     = gcc

CFLAGS = -Wall -Werror -Wextra
#_______________________________________________________________________________#

#ejecuta por defecto
all: ${NAME}	       			

#compila los .o con la libreria
${NAME}: ${OBJTS}	      		
	ar rcs $@ $^
	
${OBJTS}:
	${CC} ${CFLAGS} -c ${SRC}

#borra lo que creas
clean:					
	rm -fr ${OBJTS} ./a.out
	
fclean: 
	rm -fr ${NAME}

.PHONY: all fclean clean re
