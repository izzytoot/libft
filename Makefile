# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: icunha-t <icunha-t@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/28 13:30:18 by icunha-t          #+#    #+#              #
#    Updated: 2024/11/11 09:38:22 by icunha-t         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a 

SRCS = ft_atoi.c ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_memchr.c ft_strchr.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_tolower.c ft_toupper.c ft_strdup.c ft_calloc.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_strmapi.c ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_split.c ft_itoa.c

OBJS = $(SRCS:.c=.o)

HEADER = ./libft.h

C_COMP = cc
FLAGS = -Wall -Werror -Wextra

RED		= "\033[0;31m"
GREEN		= "\033[0;32m"  
RESET		= "\033[0m"

all: $(NAME)

$(NAME): $(OBJS)
	@ar rcs $(NAME) $(OBJS)
	@echo $(GREEN) "$(NAME) was created successfully!" $(RESET)
	
%.o: %.c $(HEADER)
	$(C_COMP) $(FLAGS) -c $< -o $@
	
clean:
	@rm -f $(OBJS)
	@echo $(RED) "All *.o were deleted!" $(RESET)
	
fclean: clean
	@rm -f $(NAME)
	@echo $(RED) "$(NAME) was deleted!" $(RESET)

re: fclean all

.PHONY: all clean fclean re
