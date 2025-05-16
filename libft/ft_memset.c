/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: utersian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/27 16:01:14 by utersian          #+#    #+#             */
/*   Updated: 2024/12/27 16:02:42 by utersian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, unsigned int len)
{
	unsigned int	i;
	unsigned char	*ptr;
	unsigned char	value;

	ptr = (unsigned char *)b;
	value = (unsigned char)c;
	i = -1;
	while (++i < len)
		ptr[i] = value;
	return (b);
}
/*
#include <stdio.h>
int	main()
{
	char	buffer[10] = "abcdefghi";

	printf("Before memset: %s\n", buffer);

	ft_memset(buffer, 'X', 5);

	printf("After memset: %s\n", buffer);
	return 0;

}
*/
