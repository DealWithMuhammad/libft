/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhahmad <muhahmad@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 13:50:03 by muhahmad          #+#    #+#             */
/*   Updated: 2024/07/19 14:04:19 by muhahmad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*ptr;

	ptr = s;
	while (n--)
		*ptr++ = 0;
}

/*
#include <stdio.h>
int main ()
{
	int i = 0;

	char s[20] = "My name is Muhammad";
	printf("befofe bzero: %s", s);

	printf("\nAfter bzero: ");
	ft_bzero(s, 3);
	while (i < 20)
		printf("%c", s[i++]);
}
*/