/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhahmad <muhahmad@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 15:40:59 by muhahmad          #+#    #+#             */
/*   Updated: 2024/07/19 15:57:36 by muhahmad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void *ft_memcpy(void *dst, const void *src, size_t n)
{
	int i;

	i = 0;

	char *d = (char *) dst;
	const char *s = (const char *)src;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return dst;
}
/*
#include <stdio.h>
int main ()
{
	char str[] = "Hi, My name is muhammad";

	char str2[30];

	ft_memcpy (str2, str, 7);

	printf("str2: %s", str2);
}
*/