
#include "push_swap.h"

void	optimized_sort(t_stack *a, t_stack *b)
{
	int	i;
	int	bit;
	int	num;
	int	chunk;
	int	size;
	int	target_min;
	int	target_max;
	int	chunk_size;
	int	max_chunks;
	int	max_bits;

	chunk_size = 20;
	max_chunks = 5;
	max_bits = get_max_bits(a);
	size = a->top + 1;
//	max_chunks = 
//	chunk_size = size/max_chunks;
    // Phase 1: Distribute to chunks in B
	chunk = 0;
	while (chunk < max_chunks)
	{
		target_min = chunk * chunk_size;
		target_max = (chunk + 1) * chunk_size;
		i = 0;
		while (i < size)
		{
			num = peek(a);
			if (num >= target_min && num < target_max)
				pb(a, b, 1);
			else
				ra(a, b, 1);
			i++;
		}
		chunk++;
	}
    // Phase 2: Radix sort each chunk in B (5 bits max)
	bit = 0;
	while (bit < max_bits && !is_sorted(b))
	{
		i = 0;
		while (i < chunk_size * max_chunks && !is_sorted(b))
		{
			num = peek(b);
			if ((num >> bit) & 1)
				pa(a, b, 1);
			else
				rb(a, b, 1);
			i++;
		}
		while (!is_stempty(a))
			pb(a, b, 1);
		bit++;
	}
	while (!is_stempty(b))
		pa(a, b, 1);
}
