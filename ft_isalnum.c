/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhahmad <muhahmad@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 17:40:53 by muhahmad          #+#    #+#             */
/*   Updated: 2024/06/05 12:53:45 by muhahmad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int	ft_isalnum(char c)
{
	if ((c < 48 || c > 57)
		&& (c < 65 || c > 90)
		&& (c < 97 || c > 122))
		return (0);
	return (1);
}
/*
int main()
{
	char c = '&';
	printf("is it numeric or alpha?: %d\n", ft_isalnum(c));
	printf("is it alpha or numeric: %d", isalnum(c));
	
}
*/