/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_bits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: utersian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 11:10:59 by utersian          #+#    #+#             */
/*   Updated: 2025/05/05 11:11:06 by utersian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int     get_bits(t_stack *stack, int bit)
{
	int	i;
        int     nbits;

        i = 0;
        nbits = 0;
	while (i <= stack->top)
	{
        	if ((stack->items[i] >> bit) == 0)
                	nbits++;
//		printf("item: %d | bit: %d | nbits: %d\n", stack->items[i], bit, nbits);
		i++;
	}
        return (nbits);
}
