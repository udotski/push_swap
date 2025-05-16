/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: utersian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/27 11:54:39 by utersian          #+#    #+#             */
/*   Updated: 2024/12/30 16:35:24 by utersian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	unsigned int		i;
	unsigned int		src_len;
	unsigned int		dest_len;

	src_len = 0;
	while (src[src_len] != '\0')
		src_len++;
	dest_len = 0;
	while (dst[dest_len] != '\0')
		dest_len++;
	if (size < dest_len)
		return (size + src_len);
	i = 0;
	while (src[i] && (dest_len + i + 1) < size)
	{
		dst[dest_len + i] = src[i];
		i++;
	}
	if ((dest_len + i) < size)
		dst[dest_len + i] = '\0';
	return (src_len + dest_len);
}
