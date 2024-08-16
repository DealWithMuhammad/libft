/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhahmad <muhahmad@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 15:34:03 by muhahmad          #+#    #+#             */
/*   Updated: 2024/08/16 10:39:18 by muhahmad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (ptr[i] == (unsigned char)c)
			return ((void *)ptr + i);
		i++;
	}
	return (NULL);
}

/*
#include <stdio.h>
#include <string.h>
int main () 
{
   const char str[] = "Muhammad";
   const char ch = 'd';
   char *ret = ft_memchr(str, ch, strlen(str));
   printf("String after |%c| is - |%ld|\n", ch, ret - str);
   return(0);
}
*/