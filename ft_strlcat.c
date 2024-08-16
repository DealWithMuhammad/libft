/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhahmad <muhahmad@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 06:27:59 by muhahmad          #+#    #+#             */
/*   Updated: 2024/08/16 14:14:37 by muhahmad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *s1, const char *s2, size_t dstsize)
{
	size_t	srclen;
	size_t	dstlen;
	size_t	i;

	srclen = ft_strlen(s2);
	dstlen = 0;
	while (dstlen < dstsize && s1[dstlen] != '\0')
		dstlen++;
	if (dstsize <= dstlen)
		return (dstsize + srclen);
	i = 0;
	while (dstlen + i + 1 < dstsize && s2[i] != '\0')
	{
		s1[dstlen + i] = s2[i];
		i++;
	}
	s1[dstlen + i] = '\0';
	return (dstlen + srclen);
}
/*
#include <stdio.h> 
#include <string.h> 
 
int main() { 
	char s[30]  = "Hello";
	char dest[] = "World123123";
	

	ft_strlcat(s, dest, 8);

	printf("%s", s);
} 
*/