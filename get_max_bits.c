/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_max_bits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: utersian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 11:10:59 by utersian          #+#    #+#             */
/*   Updated: 2025/04/08 11:11:06 by utersian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int     get_max_bits(t_stack *stack)
{
        int     i;
        int     max;
        int     max_bits;

        max = stack->items[0];
        max_bits = 0;

        i = 1;
        while (i <= stack->top)
        {
                if (stack->items[i] > max)
                        max = stack->items[i];
                i++;
        }
        while ((max >> max_bits) != 0)
                max_bits++;
        return max_bits;
}

