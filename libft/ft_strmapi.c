/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: utersian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 12:34:45 by utersian          #+#    #+#             */
/*   Updated: 2025/01/25 12:46:58 by utersian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	int		length;
	char	*dst;

	if (!s || !f)
		return (0);
	length = ft_strlen(s);
	dst = (char *) malloc (sizeof(char) * (length + 1));
	if (!dst)
		return (0);
	i = -1;
	while (++i < length)
		dst[i] = f(i, s[i]);
	dst[i] = '\0';
	return (dst);
}
