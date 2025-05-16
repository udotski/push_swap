/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: utersian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 12:44:10 by utersian          #+#    #+#             */
/*   Updated: 2024/11/04 14:56:48 by utersian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t		i;
	size_t		copy;
	size_t		src_len;

	i = 0;
	src_len = 0;
	while (src[src_len] != '\0')
		src_len++;
	if (src_len < size - 1)
		copy = src_len;
	else
		copy = size - 1;
	i = -1;
	while (++i < copy && src_len > 0 && size > 0)
		dst[i] = src[i];
	if (size > 0)
		dst[copy] = '\0';
	return (src_len);
}
/*
#include <stdio.h>
int	main()
{
        char	dest[20];
	char	str[]="";
	int	src_len;
	int	i;

	src_len = ft_strlcpy(dest, str, 15);
        printf("%d\n",src_len);
	i = -1;
	while (dest[++i] != '\0')
		write(1, &dest[i], 1);
	return (0);
}
*/
