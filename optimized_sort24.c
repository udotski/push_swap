/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: utersian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 11:09:49 by utersian          #+#    #+#             */
/*   Updated: 2025/04/08 11:09:55 by utersian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    optimized_sort2(t_stack *a, t_stack *b)
{
        int     i;
        int     num;
        int     bit;
	int	size_bits;
        int     max_bits;
	int	flg;
//        int     size;

        max_bits = get_max_bits(a);
//        size = a->top + 1;
        bit = 1;

        while (bit <= max_bits)
        {
//		printf("bit: %d\n", bit);
                i = 0;
		flg = 1;
		size_bits = get_bits(a, bit);
                while (i < size_bits)
                {
			if (size_bits < size_bits)
			{
                        	num = peek(a);
                        	if ((num >> bit) != 0)
                                	ra(a, b, 1);  // Keep numbers with bit set in A
                        	else
				{
                                	pb(a, b, 1);  // Push numbers without bit set to B
				i++;
//				printf("peek: %d | item: %d\n", peek(b), b->items[b->top - 1]);
				if (i > 1 && (peek(b) < b->items[b->top - 1]))
				{
					sb(a, b, 1);
					while (!is_revsorted(b, i) && (size_bits) > 1)
					{
//						printf("oi");
                				pa(a, b, 1);
						sb(a, b, 1);
						size_bits--;
					}
					flg = 0;
					break;
				}
			}
                }
		bit = bit + flg;
//		printf("i: %d | size_bits: %d \n" , i, size_bits);
	}
//	exit(EXIT_FAILURE);
        while (!is_stempty(b))
		pa(a, b, 1);
}
