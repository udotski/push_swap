/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   has_duplicates.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: utersian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 11:10:20 by utersian          #+#    #+#             */
/*   Updated: 2025/04/08 11:10:25 by utersian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int     has_duplicates(t_stack *stack)
{
        int     i;
        int     j;

        i = 0;
        while (i <= stack->top)
        {
                j = i + 1;
                while (j <= stack->top)
                {
                        if (stack->items[i] == stack->items[j])
                                return (1);
                        j++;
                }
		i++;
        }
        return (0);
}
