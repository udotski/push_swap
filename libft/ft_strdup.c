/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: utersian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/28 10:08:59 by utersian          #+#    #+#             */
/*   Updated: 2025/01/07 14:01:34 by utersian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	int		n;
	int		i;
	char	*ptr;

	n = ft_strlen(src);
	ptr = (char *) malloc (n + 1);
	if (!ptr)
		return (0);
	i = 0;
	while (i <= n)
	{
		ptr[i] = src[i];
		i++;
	}
	return (ptr);
}
/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int	main()
{
	char*	src = "";
	char*	dst;

        printf("Source: %s\n",src);
	dst = strdup(src);
	printf("Dest: %s\n",dst);
	printf("Dest da ft: %s\n", ft_strdup(src));
	return (0);
}
*/
