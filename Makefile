# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vde-frei <vde-frei@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/20 12:05:38 by vde-frei          #+#    #+#              #
#    Updated: 2023/08/05 19:26:39 by vde-frei         ###   ########.fr        #
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
	    ft_calloc.c \
	    ft_putchar_fd.c \
	    ft_putstr_fd.c \
	    ft_putendl_fd.c \
	    ft_putnbr_fd.c \
	    ft_itoa.c \
	    ft_substr.c \
	    ft_strjoin.c \
	    ft_strtrim.c \
	    ft_split.c \
	    ft_strmapi.c \
	    ft_striteri.c
OBJFILES := $(SRCFILES:%.c=%.o)
CFLAGS := -Wall -Wextra -Werror -g -I.
HEADER := libft.h

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
