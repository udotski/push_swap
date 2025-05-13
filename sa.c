/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: utersian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 11:04:59 by utersian          #+#    #+#             */
/*   Updated: 2025/04/08 11:05:09 by utersian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_stack *a, t_stack *b, int print)
{
	int	tmp;

	if (a->top >= 1)
	{
		tmp = a->items[a->top];
		a->items[a->top] = a->items[a->top - 1];
		a->items[a->top - 1] = tmp;
		if (print)
			print_stacks(a, b, "sa\n");
	}
}
