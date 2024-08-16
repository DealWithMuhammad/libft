/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhahmad <muhahmad@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 16:24:27 by muhahmad          #+#    #+#             */
/*   Updated: 2024/08/16 14:27:36 by muhahmad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t num, size_t size)
{
	size_t	total_size;
	void	*ptr;

	if (num == 0 || size == 0)
		return (malloc(0));
	if (num > SIZE_MAX / size)
		return (NULL);x
	total_size = num * size;
	ptr = malloc(total_size);
	if (ptr == NULL)
		return (NULL);
	ft_memset(ptr, 0, total_size);
	return (ptr);
}
/*
int main() {
	int *array;
	int num_elements = 5;

	array = (int *)my_calloc(num_elements, sizeof(int));

	if (array == NULL) {
		printf("Memory allocation with my_calloc failed\n");
		return 1;
	}

	printf("Array allocated with my_calloc:\n");
	for (int i = 0; i < num_elements; i++) {
		printf("array[%d] = %d\n", i, array[i]);
	}

	free(array);

	return 0;
}
*/