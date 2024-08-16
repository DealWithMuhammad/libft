/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhahmad <muhahmad@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/26 14:00:56 by muhahmad          #+#    #+#             */
/*   Updated: 2024/08/16 14:00:23 by muhahmad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(char const *haystack, char const *needle, size_t len)
{
	size_t	i;
	size_t	j;

	if (!*needle)
		return ((char *)haystack);
	i = 0;
	while (len > 0 && i < len && haystack[i])
	{
		j = 0;
		while (i + j < len && needle[j] && haystack[i + j] == needle[j])
			j++;
		if (!needle[j])
			return ((char *)&haystack[i]);
		i++;
	}
	return (NULL);
}
/*
#include <stdio.h>
#include <string.h> 

int main() {
	const char *haystack = "Hello, this
	 is a test string.";
	const char *needle = "test";
	size_t len = 24; 

	char *result = strnstr(haystack, needle, len);
	char *result2 = ft_strnstr(haystack, needle, len);

	if (result) {
		printf("Found '%s' in '%s' within the
		 first %zu characters.\n", needle, haystack, len);
	} else {
		printf("'%s' not found within the first %zu characters.\n", needle, len);
	}

	 if (result2) {
		printf("\nFound '%s' in '%s' withi
		n the first %zu characters.\n", needle, haystack, len);
	} else {
		printf("'%s' not found within the first %zu characters.\n", needle, len);
	}

	return 0;
}
*/