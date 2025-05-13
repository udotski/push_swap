/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: utersian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 11:09:49 by utersian          #+#    #+#             */
/*   Updated: 2025/04/25 12:31:06 by utersian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	radix_sort(t_stack *a, t_stack *b)
{
	int	i;
	int	num;
	int	bit;
	int	max_bits;
	int	size;

	max_bits = get_max_bits(a);
	size = a->top + 1;
	bit = 0;
	while (bit < max_bits && !is_sorted(a))
	{
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
		while (!is_stempty(b))
			pa(a, b, 1);
		bit++;
	}
}
