/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_stacks.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: utersian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 08:42:10 by utersian          #+#    #+#             */
/*   Updated: 2025/04/22 08:42:15 by utersian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_stacks(t_stack *a, t_stack *b, char *str)
{
	int	i;
	int	j;
	int	ii;
	int	pfancy;

	pfancy = 1;
	ft_putstr_fd(str, 1);
	i = a->top + 1;
	j = b->top + 1;
	ii = i;
	if (j > i)
		ii = j;
	while (ii-- > 0)
	{
		if (pfancy)
		{
			if (i >= j)
				ft_putnbr_fd(a->items[ii], 1);
			else
				ft_putchar_fd(' ', 1);
			ft_putchar_fd(' ', 1);
			if (ii <= b->top)
			{
				ft_putnbr_fd(b->items[ii], 1);
				ft_putchar_fd(' ', 1);
			}
		ft_putchar_fd('\n', 1);
		}
	}
	if (pfancy)
	{
		ft_putstr_fd("_ _\n", 1);
		ft_putstr_fd("a b\n", 1);
	}
}
