/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: utersian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/27 15:41:43 by utersian          #+#    #+#             */
/*   Updated: 2024/12/27 15:59:23 by utersian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned int	i;
	unsigned char	*srcc;
	unsigned char	*dstt;

	srcc = (unsigned char *)src;
	dstt = (unsigned char *)dst;
	i = -1;
	while (++i < n)
		dstt[i] = srcc[i];
	return (dst);
}
/*
#include <stdio.h>
int	main()
{
	char	srcs[] = "abcdefghi";
	char	dest[20];

	printf("Before memcpy: %s\n", srcs);

	ft_memcpy(dest, srcs, 10);

	printf("After memcpy: %s\n", dest);
	return 0;

}
*/
