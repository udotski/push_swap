/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: utersian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/27 12:03:09 by utersian          #+#    #+#             */
/*   Updated: 2024/12/27 12:03:14 by utersian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c = c - 32;
	return (c);
}
/*
#include <stdio.h>

int	main(int argc, char *argv[])
{
        char*	str;
	int	i = 0;

	argc = 2;
	str = argv[1];
	ft_strupcase(str);
	while(str[i] != '\0')
	{
		printf("%c",str[i]);
		i++;
	}
	return argc;

}
*/
