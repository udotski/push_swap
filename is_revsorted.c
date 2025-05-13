/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_revsorted.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: utersian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 14:57:56 by utersian          #+#    #+#             */
/*   Updated: 2025/05/06 14:57:03 by utersian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int     is_revsorted(t_stack *a, int nbits)
{
        int     i;

        i = a->top;
        while(i > nbits)
        {
                if (a->items[i] < a->items[i - 1])
                        return (0);
//		printf("item[1]: %d | item[2]: %d\n", a->items[i], a->items[i - 1]);
                i--;
        }
        return (1);
}
