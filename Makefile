# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vde-frei <vde-frei@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/20 12:05:38 by vde-frei          #+#    #+#              #
#    Updated: 2023/07/23 00:33:49 by vde-frei         ###   ########.fr        #
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
	    ft_memset.c
OBJFILES := $(SRCFILES:%.c=%.o)
CFLAGS := -Wall -Wextra -Werror -I.

all: libft.a
	
$(NAME): $(OBJFILES)
	ar crs $(NAME) $(OBJFILES)
$(OBJFILES): %.o : %.c
	$(CC) -c $< -o $@ $(CFLAGS)

clean:
	rm -f $(OBJFILES)

fclean: clean
	rm -f $(NAME)

re: fclean all
	echo "Uma mensagem bonita aqui =D"

.PHONY: clean fclean re all
