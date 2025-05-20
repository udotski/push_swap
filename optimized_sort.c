/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   optimized_sort31.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: utersian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 11:09:49 by utersian          #+#    #+#             */
/*   Updated: 2025/05/13 09:15:04 by utersian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	*chunk_size(int bit, int size_bits, t_stack *stack)
{
	int	i;
	int	j;
	int	chsize;
	int	*elxch;

	chsize = ft_sq(bit)/2;
	elxch = (int *)malloc(chsize * sizeof(int));
	i = 0;
	while (i++ < chsize)
		elxch[i] = 0;
	i = 0;
	while (i++ < size_bits)
	{
		j = 0;
		while (j < chsize)
		{
			if ((stack->items[i] >> bit) & (j + 1))
				elxch[i]++;
		}
	}
	return (elxch);
}

void	optimized_sort(t_stack *a, t_stack *b)
{
	int	i;
	int	flg;
	int	num;
	int	bit;
	int	max_bits;
	int	size_bits;
	int	*chusize;

	max_bits = get_max_bits(a);
//	size = a->top + 1;
	bit = 0;
	while (bit < max_bits && !is_sorted(a))
	{
		flg = 1;
		size_bits = get_bits(a, bit);
		chusize = chunk_size(bit, size_bits, a);
		if (bit > 3 && size_bits > 3)
		{
			i = 0;
			while (i++ < size_bits)
                	{
                        	num = peek(a);
                        	if ((num >> bit) != 0)
                                	ra(a, b, 1);  // Keep numbers with bit set in A
                        	else
                        	{
                                	pb(a, b, 1);  // Push numbers without bit set to B
                                	i++;
//                              printf("peek: %d | item: %d\n", peek(b), b->items[b->top - 1]);
                                	if (i > 1 && (peek(b) < b->items[b->top - 1]))
                                	{
                                        	sb(a, b, 1);
                                        	while (!is_revsorted(b, i) && (size_bits) > 1)
                                        	{
                                                	pa(a, b, 1);
                                                	sb(a, b, 1);
                                                	size_bits--;
                                        	}
                                        	flg = 0;
                                        	break;
                                	}
                        	}
                	}
			i = 0;
			while (i++ < size_bits%4)
				radix_core(size_bits, bit, a, b);
		}
		radix_core(size_bits, bit, a, b);
		while (!is_stempty(b))
			pa(a, b, 1);
		bit = bit + flg;
	}
}
