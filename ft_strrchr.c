/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhahmad <muhahmad@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 13:15:30 by muhahmad          #+#    #+#             */
/*   Updated: 2024/08/16 14:08:32 by muhahmad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*last_occerance;

	last_occerance = NULL;
	while (*s)
	{
		if (*s == (char)c)
			last_occerance = s;
		s++;
	}
	if (*s == (char)c)
		return ((char *)s);
	return ((char *)last_occerance);
}
/*
#include <stdio.h>
#include <string.h>

int main()
{
	char str[] = "Hi, My name is Muhammad";
	char ch = '!';

	char *ret = strrchr(str, ch);
	char *result = ft_strrchr(str, ch);

	printf("%s", ret);
	printf("\n%s", result);

}
*/