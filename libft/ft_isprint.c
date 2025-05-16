/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: utersian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 11:16:16 by utersian          #+#    #+#             */
/*   Updated: 2024/12/30 11:40:26 by utersian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	int	idx;

	idx = 1;
	if (c < 32 || c > 126)
		idx = 0;
	return (idx);
}
/*
int	main()
{
	char*	str;
	int	idx;

	str = "\n";
	idx = ft_str_is_uppercase(str);
        printf("Resultado: %d\n",idx);
	printf("%c\n",str[0]);

	return 0;

}
*/
