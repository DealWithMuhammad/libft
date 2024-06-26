/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhahmad <muhahmad@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 15:26:19 by muhahmad          #+#    #+#             */
/*   Updated: 2024/06/08 13:33:05 by muhahmad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(const char *s)
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