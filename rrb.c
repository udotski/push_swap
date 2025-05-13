/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrb.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: utersian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 11:08:09 by utersian          #+#    #+#             */
/*   Updated: 2025/04/08 11:08:15 by utersian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    rrb(t_stack *a, t_stack *b, int print)
{
        int     i;
        int     last;

        if (b->top >= 1)
                last = b->items[0];
        i = 0;
        while (i < b->top)
        {
                b->items[i] = b->items[i + 1];
                i++;
        }
        b->items[b->top] = last;
        if (print)
                print_stacks(a, b, "rrb\n");
}
