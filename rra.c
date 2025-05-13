/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rra.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: utersian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 11:07:57 by utersian          #+#    #+#             */
/*   Updated: 2025/04/08 11:08:02 by utersian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    rra(t_stack *a, t_stack *b, int print)
{
        int     i;
        int     last;

        if (a->top >= 1)
                last = a->items[0];
        i = 0;
        while (i < a->top)
        {
                a->items[i] = a->items[i + 1];
                i++;
        }
        a->items[a->top] = last;
        if (print)
                print_stacks(a, b, "rra\n");;
}
