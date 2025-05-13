/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_input.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: utersian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 11:10:39 by utersian          #+#    #+#             */
/*   Updated: 2025/04/08 11:10:44 by utersian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    parse_input(t_stack *a, int argc, char **argv)
{
        int     i;
        long    num;

        i = argc - 1;
        while (i >= 1)
        {
                if (!is_valid_number(argv[i]))
                {
			fprintf(stderr, "Error!\n Not a valid number.\n");
                        exit(EXIT_FAILURE);
                }
                num = atol(argv[i]);
                if (num > INT_MAX || num < INT_MIN)
                {
			fprintf(stderr, "Error!\n Number too big or too small.\n");
                        exit(EXIT_FAILURE);
                }
                push(a, (int)num);
                i--;
        }
        if (has_duplicates(a))
        {
                fprintf(stderr, "Error!\n");
                exit(EXIT_FAILURE);
        }
}
