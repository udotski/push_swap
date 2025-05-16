/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: utersian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 12:56:08 by utersian          #+#    #+#             */
/*   Updated: 2025/01/25 12:49:01 by utersian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int	i;

	i = 1;
	if (n == 0)
		return (0);
	while (*s1 && *s2 && i < n && *s1 == *s2)
	{
		s1++;
		s2++;
		i++;
	}
	return (((unsigned char)*s1) - ((unsigned char)*s2));
}
/*
#include <stdlib.h>
#include <string.h>

int	main(int argc, char *argv[])
{
           int res;

	printf("N args: %d\n",argc);
	   res = 0;
           if (argc < 4) {
               printf("Argument missing.");
               exit(EXIT_FAILURE);
           }

           if (argc == 4){
		printf("Passando a funcao....\n");
                res = ft_strncmp(argv[1], argv[2], atoi(argv[3]));}
           if (res == 0) {
               printf("<str1> and <str2> are equal");
               printf("\n");
           } else if (res < 0) {
               printf("<str1> is less than <str2> (%d)\n", res);
           } else {
               printf("<str1> is greater than <str2> (%d)\n", res);
           }

           exit(EXIT_SUCCESS);
}
*/
