/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: utersian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 11:15:10 by utersian          #+#    #+#             */
/*   Updated: 2024/12/30 11:39:36 by utersian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	int	i;
	int	idx;

	i = 0;
	idx = 1;
	if (c >= 'A' && c <= 'Z')
		idx = 1;
	else if (c >= 'a' && c <= 'z')
		idx = 1;
	else
		idx = 0;
	i++;
	return (idx);
}
/*
int	main()
{
	char*	str = "";
	int	idx;

	idx = ft_str_is_alpha(str);
        printf("Resultado: %d\n",idx);

}
*/
