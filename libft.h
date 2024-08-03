/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhahmad <muhahmad@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 13:45:10 by muhahmad          #+#    #+#             */
/*   Updated: 2024/08/03 14:12:12 by muhahmad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>

// int	ft_isalpha(int c);
// int	ft_isdigit(int c);

#ifndef LIBFT_H
#define LIBFT_H
#include <string.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int ft_atoi(const char *str);


void *ft_memset(void *b, int c, size_t len);

size_t ft_strlen(const char *s);

char *ft_strcpy(char *dst, const char *src);
char *ft_strchr(const char *s, int c);
char *ft_strrchr(const char *s, int c);
int ft_strncmp(const char *s1, const char *s2, size_t n);

size_t ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t ft_strlcat(char *s1, const char *s2, size_t dstsize);
void *ft_memchr(const void *s, int c, size_t n);
int ft_memcmp(const void *s1, const void *s2, size_t n);
void *ft_calloc(size_t num, size_t size);

int ft_isalpha(int c);
int ft_isdigit(int c);
int ft_isalnum(int c);
int ft_isascii(int c);
int ft_isprint(int c);
int ft_toupper(int c);
int ft_tolower(int c);
char *ft_strdup(const char *s1);

void ft_bzero(void *s, size_t n);
void *ft_memcpy(void *dst, const void *src, size_t n);
void *ft_memmove(void *dst, const void *src, size_t len);
char *ft_strnstr(const char *haystack, const char *needle, size_t len);
char *ft_substr(char const *s, unsigned int start, size_t len);
char *ft_strjoin(char const *s1, char const *s2);



void ft_putendl_fd(char *s, int fd);
void ft_putstr_fd(char *s, int fd);
void ft_putchar_fd(char c, int fd);
void ft_putnbr_fd(int n, int fd);



#endif