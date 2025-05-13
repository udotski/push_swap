/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: utersian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 11:09:13 by utersian          #+#    #+#             */
/*   Updated: 2025/04/08 11:09:17 by utersian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_three(t_stack *a, t_stack *b)
{
	int	first;
	int	second;
	int	third;
	if (is_sorted(a))
		return;
	first = a->items[a->top];
	second = a->items[a->top - 1];
	third = a->items[a->top - 2];

	if (first > second && second < third && first < third)
		sa(a, b, 1);
	else if (first > second && second > third)
	{
		sa(a, b, 1);
		rra(a, b, 1);
	}
	else if (first > second && second < third && first > third)
		ra(a, b, 1);
	else if (first < second && second > third && first < third)
	{
		sa(a, b, 1);
		ra(a, b, 1);
	}
	else if (first < second && second > third && first > third)
		rra(a, b, 1);
}
