# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vde-frei <vde-frei@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/20 12:05:38 by vde-frei          #+#    #+#              #
#    Updated: 2024/04/04 16:22:53 by vde-frei         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SHELL := /bin/bash
COUNT := 0
SLEEP := sleep 0.2

BLACK  		 = \033[0;30m
RED    		 = \033[0;31m
GREEN  		 = \033[0;32m
YELLOW 		 = \033[0;33m
BLUE   		 = \033[0;34m
MAGENTA		 = \033[0;35m
CYAN   		 = \033[0;36m
WHITE  		 = \033[0;37m
RESET  		 = \033[0m

MANDATORY = Static library compiled
LBONUS =
CLEAN = Objects delete
FCLEAN = Static library delete
LIBNAME = libft
BLIBNAME =
COMP = Compiling

DFLAGS = -Wall -Wextra -Werror -g3 # TO debug
CFLAGS = -Wall -Werror -Wextra -g3 -Ofast
CCPFLAGS = -I./includes/ -I./src/bool/
ARFLAGS = rcs

SRC = src
BONUS =
INC = includes
OBJ = obj

INCLUDES = -I$(INC)/

CFILES = $(addprefix $(SRC)/bool/, ft_isalnum.c ft_isalpha.c ft_isascii.c \
		 ft_isdigit.c ft_isprint.c ft_isspace.c)
CFILES += $(addprefix $(SRC)/list/, ft_lstnew.c  ft_lstadd_front.c ft_lstsize.c \
		 ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c)
CFILES += $(addprefix $(SRC)/mem/, ft_bzero.c ft_memset.c ft_memcpy.c ft_memmove.c \
		 ft_memcmp.c ft_calloc.c ft_memchr.c)
CFILES += $(addprefix $(SRC)/print/, ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c \
		 ft_putnbr_fd.c)
CFILES += $(addprefix $(SRC)/string/, ft_atoi.c ft_free_split.c ft_itoa.c ft_split.c \
		 ft_strchr.c ft_strdup.c ft_striteri.c ft_strjoin.c ft_strlcat.c ft_strlcpy.c \
		 ft_strlen.c ft_strmapi.c ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_strtrim.c \
		 ft_substr.c ft_tolower.c ft_toupper.c)

OBJECT = $(CFILES:%.c=$(OBJ)/%.o)

ifdef WITH_DEBUG
	CFLAGS = $(DFLAGS)
endif

define pre_re
	fclean all
endef

define compile_c_to_o
	@$(eval COUNT=$(shell expr $(COUNT) + 1))
	@$(CC) $(CFLAGS) $(CCPFLAGS) $(INCLUDES) -c $< -o $@
	@printf "$(GREEN)$(LIBNAME) $(COMP) %d%%\r$(RESET)" $$(echo $$(($(COUNT) * 100 / $(words $(CFILES)))))
endef

define compile_o_to_a
	@$(AR) $(ARFLAGS) $@ $?
	@$(SLEEP)
	@printf "\n$(MAGENTA)$(MANDATORY)\n$(RESET)"
endef

define clean_files
	@$(RM) -rf $(OBJ)
	@$(SLEEP)
	@printf "$(RED)$(CLEAN)$(RESET)\n"
endef

define clean_lib
	@$(RM) $(NAME) && $(RM) -rf $(OBJ)
	@$(SLEEP)
	@printf "$(RED)$(FCLEAN)$(RESET)\n"
endef

define help
	@echo -e "$(GREEN)Available targets:$(RESET)"
	@echo -e "$(CYAN)all:$(RESET) $(YELLOW)Build the library$(RESET)"
	@echo -e "$(CYAN)clean:$(RESET) $(RED)Remove the object files$(RESET)"
	@echo -e "$(CYAN)fclean:$(RESET) $(RED)Remove the library and the object files$(RESET)"
	@echo -e "$(CYAN)re:$(RESET) $(YELLOW)Rebuild the library$(RESET)"
	@echo -e "$(CYAN)debug:$(RESET) $(WHITE)Build the program with debugging information$(RESET)"
endef

all: $(OBJ) $(NAME)

$(NAME): $(OBJECT)
	$(compile_o_to_a)

$(OBJ):
	@mkdir -p $(OBJ)

$(OBJ)/%.o: %.c
	@mkdir -p $(OBJ)
	$(compile_c_to_o)

clean:
	$(clean_files)

fclean: clean
	$(clean_lib)

re: $(call pre_re)

debug:
	@make WITH_DEBUG=TRUE -s

help:
	$(help)
.PHONY: all clean fclean re debug help Makefile
.DEFAULT_GOAL := all
