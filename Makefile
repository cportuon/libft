# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cportuon <cportuon@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/07 18:11:35 by cportuon          #+#    #+#              #
#    Updated: 2022/09/28 18:29:57 by cportuon         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#									VARIABLES
NAME   =	libft.a

SRC    =	ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
			ft_memchr.c ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c\
			ft_memmove.c ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c\
			ft_strchr.c ft_strnstr.c ft_strrchr.c ft_strncmp.c ft_memcmp.c\
			ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c\
			ft_putchar_fd.c ft_putendl_fd.c ft_putstr_fd.c ft_putnbr_fd.c ft_itoa.c\
			ft_strmapi.c ft_striteri.c ft_strtrim.c ft_split.c

BONUS  =	ft_lstadd_back.c ft_lstadd_front.c ft_lstclear.c ft_lstdelone.c\
			ft_lstiter.c ft_lstlast.c ft_lstmap.c ft_lstnew.c ft_lstsize.c
	
SRC_OBJTS	= $(SRC:.c=.o)
BONUS_OBJTS	= $(BONUS:.c=.o) 
CC			= gcc
CFLAGS		= -Wall -Werror -Wextra

#						REGLAS INTERNAS MODIFICADAS DEL MAKE

%.o: %.c
	$(CC) -c $< -o $@

#							REGLAS PROPIAS DEL MAKEFILE

${NAME}: ${SRC_OBJTS}	      		
	ar rcs $@ $^

all: ${NAME}

fclean:
	rm -fr ${NAME}

clean:					
	rm -fr ${SRC_OBJTS} ./a.out

bonus: $(BONUS_OBJTS) $(SRC_OBJTS)
	ar rcs $(NAME) $^

.PHONY: all fclean clean bonus
