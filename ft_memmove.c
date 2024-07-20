/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhahmad <muhahmad@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 12:41:58 by muhahmad          #+#    #+#             */
/*   Updated: 2024/07/20 14:02:14 by muhahmad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t		i;

	i = 0;
	while (dst == src || len == 0)
		return (dst);
	if (dst < src)
	{
		while (i < len)
		{
			((char *)dst)[i] = ((const char *)src)[i];
			i++;
		}
	}
	else
	{
		while (len > 0)
		{
			len--;
			((char *)dst)[len] = ((const char *)src)[len];
		}
	}
	return (dst);
}
/*
#include <stdio.h>
int main()
{
	char src[] = "Hello World!";
	char dst[20];
	ft_memmove(dst, src, 13);
	ft_memmove(str + 7, str, 5);
	ft_memmove(str, str + 7, 6);
	printf("%s", dst); 
}
*/