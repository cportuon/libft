# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cportuon <cportuon@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/07 18:11:35 by cportuon          #+#    #+#              #
#    Updated: 2022/09/27 11:04:05 by cportuon         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#___________________________________VARIABLES__________________________________#
NAME   = libft.a

SRC    = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
	ft_memchr.c ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c\
	ft_memmove.c ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c\
	ft_strchr.c ft_strnstr.c ft_strrchr.c ft_strncmp.c ft_memcmp.c\
	ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c\
	ft_putchar_fd.c ft_putendl_fd.c ft_putstr_fd.c ft_putnbr_fd.c ft_itoa.c\
	ft_strmapi.c ft_striteri.c ft_strtrim.c ft_lstadd_back.c ft_lstadd_front.c\
	ft_lstclear.c ft_lstdelone.c ft_lstiter.c ft_lstlast.c ft_lstmap.c\
	ft_lstnew.c ft_lstsize.c

# ¿Se puede sustituir por¿ --> %o : %c
#									gcc -c -Wall -Wextra -Werror $^-o $@

OBJTS  = $(SRC:.c=.o)

CC     = gcc

CFLAGS = -Wall -Werror -Wextra

#_____________________REGLAS INTERNAS MODIFICADAS DEL MAKE______________________#

%.o: %.c
	$(CC) -c $< -o $@
		
#${OBJTS}:
#	${CC} ${CFLAGS} -c ${SRC}

#_________________________REGLAS PROPIAS DEL MAKEFILE___________________________#

#ejecuta por defecto
all: ${NAME}	       			

#compila los .o con la libreria
${NAME}: ${OBJTS}	      		
	ar rcs $@ $^
#borra lo que creas
clean:					
	rm -fr ${OBJTS} ./a.out
	
fclean: 
	rm -fr ${NAME}

.PHONY: all fclean clean re
