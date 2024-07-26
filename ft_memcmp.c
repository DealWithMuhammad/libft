/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhahmad <muhahmad@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/26 12:54:40 by muhahmad          #+#    #+#             */
/*   Updated: 2024/07/26 13:20:26 by muhahmad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*p1;
	const unsigned char	*p2;

	p1 = (const unsigned char *)s1;
	p2 = (const unsigned char *)s2;
	while (n--)
	{
		if (*p1 != *p2)
			return (*p1 - *p2);
		p1++;
		p2++;
	}
	return (0);
}
/*
#include <string.h>
#include <stdio.h>

int main()
{
	char s1[] = "Muhammad";
	char s2[] = "Muhammad Ahmad";
	int result = memcmp(s1, s2, 14);
	int result2 = ft_memcmp(s1, s2, 14);
	printf("%d", result);
	printf("\n%d", result2);
}
*/