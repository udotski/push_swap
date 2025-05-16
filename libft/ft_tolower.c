/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: utersian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/27 12:03:57 by utersian          #+#    #+#             */
/*   Updated: 2024/12/27 12:04:07 by utersian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		c = c + 32;
	return (c);
}

/*
int	main(int argc, char *argv[])
{
        char*	str;
	int	i = 0;

	argc = 2;
	str = argv[1];
	ft_strlowcase(str);
	while(str[i] != '\0')
	{
		printf("%c",str[i]);
		i++;
	}
	return argc;

}
*/
