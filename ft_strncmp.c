/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhahmad <muhahmad@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 13:57:22 by muhahmad          #+#    #+#             */
/*   Updated: 2024/07/20 15:55:07 by muhahmad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int	i;

	i = 0;
	while (s1[i] && s2[i] && i < n)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	if (i < n)
		return (s1[i] - s2[i]);
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