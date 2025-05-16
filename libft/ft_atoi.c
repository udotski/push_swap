/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: utersian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 11:30:14 by utersian          #+#    #+#             */
/*   Updated: 2025/01/07 11:42:36 by utersian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ft_isspace(int c)
{
	return (c == ' ' || c == '\t' || c == '\n' || c == '\v'
		|| c == '\f' || c == '\r');
}

int	ft_atoi(const char *str)
{
	int	resultado;
	int	sinal;

	resultado = 0;
	sinal = 1;
	while (*str && ft_isspace(*str))
		str++;
	if (*str == '-')
	{
		sinal = -1;
		str++;
	}
	else if (*str == '+')
		str++;
	while (*str && ft_isdigit((unsigned char)*str))
	{
		resultado = resultado * 10 + (*str - '0');
		str++;
	}
	return (resultado * sinal);
}
