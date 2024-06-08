/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhahmad <muhahmad@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/08 13:49:01 by muhahmad          #+#    #+#             */
/*   Updated: 2024/06/08 14:43:27 by muhahmad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*a;

	a = b;
	while (len--)
		*a++ = c;
	return (b);
}
/*
#include <stdio.h>
int main()
{
	char first[10];
	ft_memset(first, 'A', 10);

	int i = 0;

	while (i < 10)
	printf("%c", first[i++]);
}
*/