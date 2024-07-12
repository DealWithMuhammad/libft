/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhahmad <muhahmad@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 17:40:53 by muhahmad          #+#    #+#             */
/*   Updated: 2024/07/12 11:17:31 by muhahmad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>
#include "libft.h"

int	ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
}

/*
int main()
{
	char c = 'a';
	printf("is it numeric or alpha?: %d\n", ft_isalnum(c));
	printf("is it alpha or numeric: %d", isalnum(c));
	
}
*/