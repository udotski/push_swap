/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: utersian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/27 15:59:41 by utersian          #+#    #+#             */
/*   Updated: 2024/12/27 16:00:59 by utersian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *b, size_t len)
{
	char	*ptr;

	ptr = (char *)b;
	while (len-- > 0)
		*ptr++ = 0;
}
/*
#include <stdio.h>
int	main()
{
	char	buffer[10] = "123456789";

	printf("Before memset: %s\n", buffer);

	ft_bzero(buffer, 2);

	printf("After memset: %s\n", buffer);
	return 0;

}
*/
