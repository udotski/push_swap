/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: utersian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 11:17:37 by utersian          #+#    #+#             */
/*   Updated: 2024/12/30 11:17:42 by utersian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	int	i;
	int	idx;

	i = 0;
	idx = 1;
	if (c < '0' || c > '9')
	{
		idx = 0;
	}
	i++;
	return (idx);
}
/*
#include <stdio.h>

int	main()
{
	char*	str = "";
	int	idx;

	idx = ft_str_is_alpha(str);
        printf("Resultado: %d\n",idx);

}
*/
