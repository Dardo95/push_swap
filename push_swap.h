/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enogueir <enogueir@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 12:41:44 by enogueir          #+#    #+#             */
/*   Updated: 2024/12/24 13:25:01 by enogueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"
# include <unistd.h>
# include <stdlib.h>
# include <limits.h>
# include <stdio.h>

typedef struct s_node
{
	int					data;
	struct s_node		*next;
	int					s_index;
}	t_node;

typedef struct s_stack
{
	t_node		*head;
	int			size;
}	t_stack;


void	push(t_stack *stack_a, t_stack *stack_b, char c, int s_n_bool);
void	reverse_rotate(t_stack *stack, char c, int s_n_bool);
void	reverse_rotate_both(t_stack *stack_a, t_stack *stack_b);
void	rotate(t_stack *stack, char c, int s_n_bool);
void	rotate_both(t_stack *stack_a, t_stack *stack_b);
void	swap(t_stack *stack, char c, int s_n_bool);
void	swap_both(t_stack *stack_a, t_stack *stack_b);
size_t	count_numbers(int argc, char **argv);
void check_limits(char *num_str, char **split_num, int *array);
void	check_duplicates(int *numbers, size_t len);
void	farray(int argc, char **argv, int *array);
int		*init_parse(int argc, char **argv, size_t *count);
void	init_stacks(t_stack *stack_a, t_stack *stack_b, int *array, int size);
void	push_stack(t_stack *stack, int index, int data);
int		del_stack(t_stack *stack);
int		is_rot_sort(t_stack *stack, int min_s_index);
void	simple_sort(t_stack *stack, int length);
void	s_insertion_sort(t_stack *stack_a, t_stack *stack_b, int length);
void	k_sort1(t_stack *stack_a, t_stack *stack_b, int length);
void	k_sort2(t_stack *stack_a, t_stack *stack_b, int length);
int		get_min_index(t_stack *stack);
int		count_r(t_node *stack, int index);
int		is_sorted(t_stack *stack);
void	free_stack(t_stack *stack);
void	sort(t_stack *stack_a, t_stack *stack_b, int *numbers, int length);

#endif
