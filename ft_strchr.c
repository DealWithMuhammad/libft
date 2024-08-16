/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhahmad <muhahmad@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 12:35:55 by muhahmad          #+#    #+#             */
/*   Updated: 2024/08/16 14:06:31 by muhahmad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	if (*s == (char)c)
		return ((char *)s);
	return (NULL);
}
/*
#include <stdio.h>
#include <string.h>

int main()
{
	char str[] = "Hi, My name is Muhammad";
	char ch = 'm';

	char *ret =  ft_strchr(str, ch);
	char *real = strchr(str, ch);
	printf("%s", ret);
	printf("\n%s", real);
}
*/