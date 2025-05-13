/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ra.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: utersian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 11:07:03 by utersian          #+#    #+#             */
/*   Updated: 2025/04/08 11:07:15 by utersian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    ra(t_stack *a, t_stack *b, int print)
{
        int     i;
        int     first;

        if (a->top >= 1)
                first = a->items[a->top];
        i = a->top;
        while (i > 0)
        {
                a->items[i] = a->items[i - 1];
                i--;
        }
        a->items[0] = first;
        if (print)
                print_stacks(a, b, "ra\n");
}
