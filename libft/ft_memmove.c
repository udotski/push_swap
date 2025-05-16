/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: utersian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/27 15:18:37 by utersian          #+#    #+#             */
/*   Updated: 2024/12/27 15:21:39 by utersian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned int		i;
	const unsigned char	*srcc;
	unsigned char		*dstt;

	srcc = (const unsigned char *)src;
	dstt = (unsigned char *)dst;
	if (dstt == srcc || n == 0)
		return (dst);
	if (dstt < srcc || dstt >= srcc + n)
	{
		i = -1;
		while (++i < n)
			dstt[i] = srcc[i];
	}
	else
	{
		i = n + 1;
		while (--i > 0)
			dstt[i - 1] = srcc[i - 1];
	}
	return (dst);
}
/*
#include <stdio.h>

int main() {
    char str[] = "HelloWorld";

    // Demonstrate overlap-safe memmove
    printf("Before memmove: %s\n", str);
    ft_memmove(str + 2, str, 2); // Move "Hello" to "lloHeorld"
    printf("After memmove: %s\n", str);

    return 0;
}
*/
