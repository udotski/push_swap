
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: utersian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 11:05:18 by utersian          #+#    #+#             */
/*   Updated: 2025/04/08 11:05:23 by utersian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sb(t_stack *a, t_stack *b, int print)
{
	int	tmp;
	if (b->top >= 1)
	{
        	tmp = b->items[b->top];
		b->items[b->top] = b->items[b->top - 1];
		b->items[b->top - 1] = tmp;
		if (print)
			print_stacks(a, b, "sb\n");
	}
}
