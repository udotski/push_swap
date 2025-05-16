/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: utersian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/26 13:20:15 by utersian          #+#    #+#             */
/*   Updated: 2025/01/25 13:12:41 by utersian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int cc)
{
	int				i;
	int				strlen;
	unsigned char	c;

	c = (unsigned char)cc;
	strlen = 0;
	while (str[strlen] != '\0')
		strlen++;
	if (c == '\0' && strlen == 0)
		return ((char *)&str[strlen]);
	if (strlen == 0)
		return (0);
	i = strlen + 1;
	while (--i >= 0)
	{
		if (str[i] == c)
			return ((char *)&str[i]);
	}
	return (0);
}
