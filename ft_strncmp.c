/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhahmad <muhahmad@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 13:57:22 by muhahmad          #+#    #+#             */
/*   Updated: 2024/08/16 10:43:33 by muhahmad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (s1[i] && s2[i] && i < n)
	{
		if ((unsigned char)s1[i] != (unsigned char)s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	if (i < n)
		return ((unsigned char)s1[i] - (unsigned char)s2[i]);
	return (0);
}
/*
#include <string.h>
#include <stdio.h>


int main()
{
	char str1[] = "Hello My name is Ahmad";
	char str2[] = "Hello My name is Muhammad";

	int result = strncmp(str1, str2, 21);
	int my_result = ft_strncmp(str1, str2, 21);


	printf("%d", result);
	printf("\n%d", my_result);
}
*/