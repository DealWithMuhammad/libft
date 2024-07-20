/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhahmad <muhahmad@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 15:26:19 by muhahmad          #+#    #+#             */
/*   Updated: 2024/07/20 15:31:54 by muhahmad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	int	length;

	length = 0;
	while (s[length])
		length++;
	return (length);
}
/*
#include <stdio.h>
#include <string.h>
int main()
{
	char c[] = "Testing the string length";
	printf("%d", ft_strlen(c));
	printf("\n%lu", strlen(c));
}
*/