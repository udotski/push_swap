/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: utersian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/28 10:04:14 by utersian          #+#    #+#             */
/*   Updated: 2025/01/25 13:11:29 by utersian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	ptr = malloc(count * size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, (count * size));
	return (ptr);
}
/*
#include <stdio.h>
int	main()
{
	int*	arr = (int *)ft_calloc(10, 8);
	if(!arr)
	{
        	printf("Memory allocation failed.\n");
        	return 1;
	}

	// Print the allocated and initialized array
	for (int i = 0; i < 5; i++) 
	{
        	printf("%d ", arr[i]); // Should print: 0 0 0 0 0
    	}
    	printf("\n");

    	// Free allocated memory
    	free(arr);

	return (0);
}
*/
