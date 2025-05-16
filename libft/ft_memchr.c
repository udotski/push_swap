/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: utersian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/27 15:13:08 by utersian          #+#    #+#             */
/*   Updated: 2024/12/30 11:46:38 by utersian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *src, int c, unsigned int n)
{
	unsigned int		i;
	unsigned char		cc;
	unsigned char		*srcc;

	cc = (unsigned char)c;
	srcc = (unsigned char *)src;
	i = -1;
	while (++i < n)
	{
		if (srcc[i] == cc)
			return (&srcc[i]);
	}
	return (0);
}
/*
#include <stdio.h>
int	main()
{
	char	srcs[] = "hello, 42";
	char*	result;

	printf("Before memcpy: %s\n", srcs);

	result = ft_memcpy(srcs, '-', 20);

	printf("Resultado: %s\n", result);
	return 0;

}
*/
