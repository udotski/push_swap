/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: utersian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 09:09:01 by utersian          #+#    #+#             */
/*   Updated: 2025/01/25 13:02:47 by utersian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	size_t		i;
	size_t		j;
	size_t		to_find_len;

	to_find_len = ft_strlen(to_find);
	if (to_find_len == 0)
		return ((char *)str);
	i = 0;
	while (str[i] != '\0' && i < len)
	{
		if (to_find[0] == str[i])
		{
			j = 1;
			while ((to_find[j] != '\0' && to_find[j] == str[i + j]) && \
					(i + j) < len)
				j++;
			if (j == to_find_len)
				return ((char *)&str[i]);
		}
		i++;
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>
#include <unistd.h>
int	main()
{
	char*	str1 = "lorem ipsum dolor sit amet";
	char*	str2 = "dolor";
//	char*	ptr2;

//	ptr2 = strstr(str1,str2);
	char *ptr = ft_strnstr(str1, str2, -1);
	printf("%s\n",ptr);
	write(1, ptr, 1);
	return (0);
}
*/
