/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix_core.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: utersian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 09:09:47 by utersian          #+#    #+#             */
/*   Updated: 2025/05/13 09:10:47 by utersian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    radix_core(int size, int bit, t_stack *a, t_stack *b)
{
        int     i;
        int     num;

        i = 0;
        while (i < size)
        {
                num = peek(a);
                if ((num >> bit) & 1)
                        ra(a, b, 1);
                else
                        pb(a, b, 1);
                i++;
        }
}
