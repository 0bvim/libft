# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vde-frei <vde-frei@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/20 12:05:38 by vde-frei          #+#    #+#              #
#    Updated: 2023/07/30 19:53:49 by vde-frei         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := libft.a
SRCFILES := ft_atoi.c \
	    ft_isalnum.c \
	    ft_isalpha.c \
	    ft_isascii.c \
	    ft_isdigit.c \
	    ft_isprint.c \
	    ft_strlen.c \
	    ft_tolower.c \
	    ft_toupper.c \
	    ft_memset.c \
	    ft_bzero.c \
	    ft_memcpy.c \
	    ft_memmove.c \
	    ft_strlcpy.c \
	    ft_strlcat.c \
	    ft_strncmp.c \
	    ft_strchr.c \
	    ft_strrchr.c \
	    ft_strdup.c \
	    ft_memchr.c \
	    ft_strnstr.c \
	    ft_memcmp.c \
	    ft_calloc.c
OBJFILES := $(SRCFILES:%.c=%.o)
CFLAGS := -Wall -Wextra -Werror -I.

all: $(NAME)
	
$(NAME): $(OBJFILES)
	@ar -rcs $(NAME) $?

clean:
	rm -f $(OBJFILES)

fclean: clean
	rm -f $(NAME)

re: fclean all
	@echo "Uma mensagem bonita aqui =D"

.PHONY: clean fclean re all
