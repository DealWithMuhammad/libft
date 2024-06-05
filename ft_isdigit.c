/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhahmad <muhahmad@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 14:50:44 by muhahmad          #+#    #+#             */
/*   Updated: 2024/06/05 14:49:19 by muhahmad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int	ft_isdigit(int c)
{
	if (c < 48 || c > 57)
		return (0);
	return (1);
}
/*int main ()
{
	char c = '1';
	printf("is it digit?: %d\n", ft_isdigit(c));
	printf("is it digit??? : %d\n", isdigit(c));
}
*/