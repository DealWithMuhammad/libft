/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhahmad <muhahmad@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/26 14:00:56 by muhahmad          #+#    #+#             */
/*   Updated: 2024/07/26 14:42:05 by muhahmad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    size_t i;

    i = 0;

    if (*needle == 0)
        return ((char *)haystack);

    while (needle[i] != '\0')
        i ++;
    while (len >= i && *haystack)
    {
        if (ft_strncmp(haystack, needle, i) == 0)
            return (char *)haystack;
        haystack++;
        len--;
    }
    return (NULL);
}
/*
#include <stdio.h>
#include <string.h> 

int main() {
    const char *haystack = "Hello, this is a test string.";
    const char *needle = "test";
    size_t len = 24; 

    char *result = strnstr(haystack, needle, len);
    char *result2 = ft_strnstr(haystack, needle, len);

    if (result) {
        printf("Found '%s' in '%s' within the first %zu characters.\n", needle, haystack, len);
    } else {
        printf("'%s' not found within the first %zu characters.\n", needle, len);
    }

     if (result2) {
        printf("\nFound '%s' in '%s' within the first %zu characters.\n", needle, haystack, len);
    } else {
        printf("'%s' not found within the first %zu characters.\n", needle, len);
    }

    return 0;
}
*/