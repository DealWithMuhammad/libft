/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhahmad <muhahmad@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 06:27:59 by muhahmad          #+#    #+#             */
/*   Updated: 2024/07/25 15:30:52 by muhahmad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *s1, const char *s2, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	len;

	i = 0;
	j = 0;
	while (s1[i] != '\0' && i <= dstsize)
		i++;
	while (s2[j] != '\0')
		j++;
	if (dstsize == 0 || dstsize <= i)
		return (dstsize + j);
	len = i;
	while (i < dstsize - 1 && s2[i - len] != '\0' )
	{
		s1[i] = s2[i - len];
		i++;
	}
	if (i < dstsize)
		s1[i] = '\0';
	return (len + j);
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