/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhahmad <muhahmad@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 15:19:05 by muhahmad          #+#    #+#             */
/*   Updated: 2024/08/03 17:00:43 by muhahmad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	wordcount(char const *s, char c)
{
	size_t	listsize;
	size_t	i;

	i = 0;
	listsize = 0;
	while (s[i] != '\0')
	{
		if ((i == 0 && s[i] != c) || \
			(s[i] == c && s[i + 1] != '\0' && s[i + 1] != c))
			listsize++;
		i++;
	}
	return (listsize);
}

char	**ft_split(char const *s, char c)
{
	char	**str_list;
	size_t	i;
	size_t	k;
	size_t	save;

	i = 0;
	k = 0;
	if (!s)
		return (NULL);
	str_list = (char **)malloc(sizeof(char *) * (wordcount(s, c) + 1));
	if (!str_list)
		return (NULL);
	while (i < wordcount(s, c) && s[k] != '\0')
	{
		while (s[k] == c)
			k++;
		save = k;
		while (s[k] != c && s[k] != '\0')
			k++;
		str_list[i] = ft_substr(s, save, k - save);
		i++;
	}
	str_list[i] = NULL;
	return (str_list);
}

// int main()
// {
//     char c=' ';
//  char str1[]= "  tripouille  42  ";
//     char **ptr = ft_split(str1, c);
// 	int i;
// 	i = 0;
// 	while (ptr[i] != NULL)
// 	{
// 		printf("%s\n", ptr[i]);
// 		i++;
// 	}
//     return (0);
// }