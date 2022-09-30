# *******************:********************************************************* #
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

NAME = libft.a

SRC = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
			ft_memchr.c ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c\
			ft_memmove.c ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c\
			ft_strchr.c ft_strnstr.c ft_strrchr.c ft_strncmp.c ft_memcmp.c\
			ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c\
			ft_putchar_fd.c ft_putendl_fd.c ft_putstr_fd.c ft_putnbr_fd.c ft_itoa.c\
			ft_strmapi.c ft_striteri.c ft_strtrim.c ft_split.c

BONUS = ft_lstadd_back_bonus.c ft_lstadd_front_bonus.c ft_lstclear_bonus.c\
			ft_lstdelone.c ft_lstiter_bonus.c ft_lstlast_bonus.c ft_lstmap_bonus.c\
			ft_lstnew_bonus.c ft_lstsize_bonus.c
	
SRC_OBJTS = $(SRC:%.c=%.o)

BONUS_OBJTS = $(BONUS:%.c=%.o)
 
CC = gcc

AR = ar rcs

RM = rm -f

CFLAGS = -Wall -Werror -Wextra

#						REGLAS INTERNAS MODIFICADAS DEL MAKE

%.o: %.c
	$(CC) -c $< -o $@

#							REGLAS PROPIAS DEL MAKEFILE

${NAME}: ${SRC_OBJTS}	      		
	$(AR) $@ $^

all: ${NAME}

$(NAME): $(SRC_OBJTS)
	$(AR) $(NAME) $(SRC_OBJTS)
	echo "Library compiled"

fclean: clean
	$(RM) ${NAME}
	echo "Library removed"

clean:					
	$(RM) ${SRC_OBJTS} $(BONUS_OBJTS)
	echo ".o files removed"

re: fclean $(NAME)

bonus: $(BONUS_OBJTS)
	$(AR) $(NAME) $(BONUS_OBJTS)
	echo "Library compiled with bonus"

.SILENT:

.PHONY: all fclean clean re bonus
