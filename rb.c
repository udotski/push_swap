/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: utersian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 11:07:24 by utersian          #+#    #+#             */
/*   Updated: 2025/04/08 11:07:30 by utersian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    rb(t_stack *a, t_stack *b, int print)
{
        int     i;
        int     first;

        if (b->top >= 1)
                first =b->items[b->top];
        i = b->top;
        while (i > 0)
        {
                b->items[i] = b->items[i - 1];
                i--;
        }
        b->items[0] = first;
        if (print)
                print_stacks(a, b, "rb\n");
}
