/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhahmad <muhahmad@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 14:09:03 by muhahmad          #+#    #+#             */
/*   Updated: 2024/07/20 15:54:16 by muhahmad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	if (dstsize == 0)
		return (ft_strlen(src));
	while (i < dstsize - 1 && src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen(src));
}

/*
#include <stdio.h>
#include <string.h>

int main ()
{
   char str[] = "Hello Worlddfghjjjjj";
	char dest[30];

		int test1 = strlcpy(dest, str, 2); 
		// int test2 = ft_strlcpy(dest, str, 2);
	
	printf("%s", dest);
	
	return 0;  
}
*/