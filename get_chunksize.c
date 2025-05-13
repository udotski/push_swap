/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chunksize.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: utersian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 11:10:59 by utersian          #+#    #+#             */
/*   Updated: 2025/05/13 11:11:06 by utersian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int     chunksize(int bit, t_stack *stack)
{
	int	i;
	int	*elxch[chusize];
        int     nbits;

        i = 0;
        nbits = 0;
	while(i < sizech)
	{
		j = 0;
		while (j++ <= stack->top)
		{
        		if ((stack->items[j] >> bit + 1) & i)
                		nbits++;
		}
		elxch[j] = nbits;
//		printf("item: %d | bit: %d | nbits: %d\n", stack->items[i], bit, nbits);
		i++;
	}
        return (elxch);
}
