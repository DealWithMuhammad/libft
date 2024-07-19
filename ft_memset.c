/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhahmad <muhahmad@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/08 13:49:01 by muhahmad          #+#    #+#             */
/*   Updated: 2024/07/19 13:33:07 by muhahmad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t len)
{
	unsigned char	*a;

	a = str;
	while (len--)
		*a++ = c;
	return (str);
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