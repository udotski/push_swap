/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   peek.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: utersian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 11:04:15 by utersian          #+#    #+#             */
/*   Updated: 2025/04/08 11:04:39 by utersian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int     peek(t_stack *stack)
{
        if (is_stempty(stack))
        {
                fprintf(stderr, "Stack is empty\n");
                exit(EXIT_FAILURE);
        }
    return (stack->items[stack->top]);
}
