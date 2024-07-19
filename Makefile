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
			  ft_bzero.c
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
