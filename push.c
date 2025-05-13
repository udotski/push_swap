/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: utersian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 11:03:00 by utersian          #+#    #+#             */
/*   Updated: 2025/04/08 11:03:25 by utersian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push(t_stack *stack, int item)
{
	if (is_stfull(stack)) 
	{
		fprintf(stderr, "Stack overflow\n");
		exit(EXIT_FAILURE);
	}
	stack->items[++stack->top] = item;
}
