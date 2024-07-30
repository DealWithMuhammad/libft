/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhahmad <muhahmad@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 16:51:17 by muhahmad          #+#    #+#             */
/*   Updated: 2024/07/29 17:15:50 by muhahmad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strdup(const char *s1)
{
    size_t length;

    length = ft_strlen(s1) + 1;

    char *dup;
    dup = (char *)malloc(length);

    ft_memcpy(dup, s1, length);

    return dup;
}
/*
int main ()
{
    char *s1 = "This is my string 1";
    char *dup;

    dup = ft_strdup(s1);

    printf("%s", dup); 
}
*/