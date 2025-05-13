/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: utersian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 11:01:16 by utersian          #+#    #+#             */
/*   Updated: 2025/04/08 11:01:59 by utersian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	init_stack(t_stack *stack, int capacity)
{
	stack->items = (int *)malloc(capacity * sizeof(int));
	stack->top = -1;
	stack->capacity = capacity;
}
