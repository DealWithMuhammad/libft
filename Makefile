# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: muhahmad <muhahmad@student.42kl.edu.my>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/20 12:39:03 by muhahmad          #+#    #+#              #
#    Updated: 2024/08/03 17:03:46 by muhahmad         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME        = libft.a
CFLAGS      = -Wall -Werror -Wextra -I. -c
FILES       = ft_memset.c \
              ft_strlen.c \
              ft_strchr.c \
              ft_strncmp.c \
              ft_atoi.c \
			  ft_strrchr.c \
              ft_isalpha.c \
              ft_isdigit.c \
              ft_isalnum.c \
              ft_isprint.c \
              ft_toupper.c \
              ft_tolower.c \
              ft_isascii.c \
			  ft_bzero.c \
			  ft_memcpy.c \
              ft_memmove.c \
              ft_strlcpy.c \
              ft_strlcat.c \
              ft_memchr.c   \
              ft_memcmp.c   \
              ft_strnstr.c  \
              ft_calloc.c   \
              ft_strdup.c \
              ft_putchar_fd.c \
              ft_putendl_fd.c  \
              ft_putstr_fd.c    \
              ft_putnbr_fd.c    \
              ft_substr.c   \
              ft_strjoin.c \
              ft_strtrim.c \
              ft_split.c    \
              ft_itoa
OBJ         = $(FILES:.c=.o)

all: $(NAME)


$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

$(OBJ): %.o: %.c
	gcc $(CFLAGS) $< -o $@

clean:
	rm -f $(OBJ)
	# rm -f $(FILES) 

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: clean fclean all re
