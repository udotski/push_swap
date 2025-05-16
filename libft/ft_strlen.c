/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: utersian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 15:14:54 by utersian          #+#    #+#             */
/*   Updated: 2024/10/28 15:18:30 by utersian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
/*
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
int	main()
{
	char* str;
	int	i;

	str = "ANIMALESCO";
	i = ft_strlen(str);

// Convertir el entero a cadena
        char    buffer[20];
        int longitud = snprintf(buffer, sizeof(buffer), "%d", i);

// Escribir la cadena en la salida estándar
        write(STDOUT_FILENO, buffer, longitud);

	return 0;
}
*/
