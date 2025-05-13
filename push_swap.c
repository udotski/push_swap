/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: utersian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/05 08:03:44 by utersian          #+#    #+#             */
/*   Updated: 2025/04/05 08:03:54 by utersian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	if (argc < 2)
	{
		ft_putstr_fd("Enter with at least 2 arguments.\n", 1);
		exit (EXIT_FAILURE);
	}
	t_stack a, b;
	init_stack(&a, argc - 1);
	init_stack(&b, argc - 1);
	parse_input(&a, argc, argv);
//	print_stacks(&a, &b, "Init a and b:\n");
	if (is_sorted(&a))
	{
        	free(a.items);
        	free(b.items);
        	return (0);
	}
	normalize_numbers(&a);
	if (a.capacity <= 3)
        	simple_sort(&a, &b, a.capacity);
	else
		optimized_sort(&a, &b);
	free(a.items);
	free(b.items);
	return (0);
}
