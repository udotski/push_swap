/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: utersian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/28 10:21:04 by utersian          #+#    #+#             */
/*   Updated: 2025/01/29 14:53:02 by utersian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <stddef.h>
# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>
# include <limits.h>
# include "../libft/libft.h"

//Structures
typedef struct s_stack
{
	int *items;
	int top;
	int capacity;
} t_stack;
//Utiles
int     is_sorted(t_stack *a);
int     is_revsorted(t_stack *a, int size_bits);
void	print_stacks(t_stack *a, t_stack *b, char *str);
int     has_duplicates(t_stack *stack);
int	is_stempty(t_stack *stack);
int	is_valid_number(char *str);
int	is_stfull(t_stack *stack);
void    parse_input(t_stack *a, int argc, char **argv);
int     get_max_bits(t_stack *stack);
int	get_bits(t_stack *stack, int bit);
void    normalize_numbers(t_stack *a);
// Stack operations
void	init_stack(t_stack *stack, int capacity);
void	push(t_stack *stack, int item);
int     pop(t_stack *stack);
int     peek(t_stack *stack);
// PushSwap operations
void	sa(t_stack *a, t_stack *b, int print);
void    sb(t_stack *a, t_stack *b, int print);
void    ss(t_stack *a, t_stack *b, int print);
void    pb(t_stack *a, t_stack *b, int print);
void    pa(t_stack *a, t_stack *b, int print);
void    ra(t_stack *a, t_stack *b, int print);
void    rb(t_stack *a, t_stack *b, int print);
void    rr(t_stack *a, t_stack *b, int print);
void    rra(t_stack *a, t_stack *b, int print);
void    rrb(t_stack *a, t_stack *b, int print);
void    rrr(t_stack *a, t_stack *b, int print);
// Sorting algorithms
void	simple_sort(t_stack *a, t_stack *b, int n);
void	sort_three(t_stack *a, t_stack *b);
void	optimized_sort(t_stack *a, t_stack *b);
void	radix_core(int size, int bit, t_stack *a, t_stack *b);
//void    radix_sort(t_stack *a, t_stack *b);
//Principal
int	main(int argc, char **argv);

#endif
