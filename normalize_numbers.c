/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   normalize_numbers.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: utersian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 11:11:19 by utersian          #+#    #+#             */
/*   Updated: 2025/04/08 11:11:24 by utersian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    normalize_numbers(t_stack *a)
{
        int     i;
        int     min;

        min = a->items[0];
// Find minimum value
        i = 1;
        while (i <= a->top)
        {
                if (a->items[i] < min)
                        min = a->items[i];
                i++;
        }
// Shift all numbers up by -min
        if (min < 0)
        {
                i = 0;
                while (i <= a->top)
                {
                        a->items[i] -= min;
                        i++;
                }
        }
//	i = 0;
//        while (i <= a->top){
//		printf("%d ",a->items[i]);
//		i++;}
}
