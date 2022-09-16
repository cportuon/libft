# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cportuon <cportuon@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/07 18:11:35 by cportuon          #+#    #+#              #
#    Updated: 2022/09/16 11:19:57 by cportuon         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#Variables
NAME   = libft.a

SRC    = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
	ft_memchr.c ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c \
	ft_strlcpy.c ft_strlcat.c ft_tolower.c ft_strchr.c \
	ft_strrchr.c ft_strncmp.c ft_memcmp.c ft_atoi.c ft_calloc.c
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

#crea los .o de todos los punto .c con el mismo nombre y los compila
%.o: %.c
	$(CC) -c $< -o $@
		
#${OBJTS}:
#	${CC} ${CFLAGS} -c ${SRC}

#borra lo que creas
clean:					
	rm -fr ${OBJTS} ./a.out
	
fclean: 
	rm -fr ${NAME}

.PHONY: all fclean clean re
