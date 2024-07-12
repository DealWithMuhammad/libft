CC = gcc
RM = rm -r
CFLAGS = -Wall -Wextra -Werror

all : final

final: testing.c
	gcc $(CFLAGS) testing.c -o final

clean: 
	rm -r final

fclean: clean
	rm -r *.o

re: clean all