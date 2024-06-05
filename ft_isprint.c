/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhahmad <muhahmad@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 15:05:40 by muhahmad          #+#    #+#             */
/*   Updated: 2024/06/05 15:24:06 by muhahmad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int c)
{
	return (c > 31 && c < 127);
}
/*
#include <stdio.h>
#include <ctype.h>
int main ()
{
	char a = '!';
	printf("%d", ft_isprint(a));
		printf("\n%d", isprint(a));
}
*/