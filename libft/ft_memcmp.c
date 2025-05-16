/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: utersian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/27 15:07:10 by utersian          #+#    #+#             */
/*   Updated: 2025/01/25 13:03:31 by utersian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned int		i;
	unsigned const char	*ss1;
	unsigned const char	*ss2;

	ss1 = (unsigned const char *)s1;
	ss2 = (unsigned const char *)s2;
	i = 0;
	while (++i <= n)
	{
		if (*ss1 != *ss2)
			return (*ss1 - *ss2);
		ss1++;
		ss2++;
	}
	return (0);
}
/*
int	main()
{
	char	src1[] = "salut";
	char	src2[] = "salut";

	printf("Result: %d\n", ft_memcmp(src1, src2, 5));
	return 0;
}
*/
