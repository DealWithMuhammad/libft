/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhahmad <muhahmad@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 14:27:38 by muhahmad          #+#    #+#             */
/*   Updated: 2024/06/05 13:05:59 by muhahmad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int	ft_isalpha(int c)
{
	if ((c < 65 || c > 90) && (c < 97 || c > 122))
		return (0);
	return (1);
}

// int main() {
//     char c = '7';
//     printf("Is it an 
//     alphabetic character 
//     by using my own ft_function? %d\n", ft_isalpha(c));
//     printf("Is it an alphabetic character 
//   by using the default function? %d\n", isalpha(c));

//     return 0;
// }