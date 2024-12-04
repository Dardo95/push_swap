/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enogueir <enogueir@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 12:41:44 by enogueir          #+#    #+#             */
/*   Updated: 2024/12/04 17:18:41 by enogueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"
# include <unistd.h>
# include <stdlib.h>

typedef struct s_stack
{
	t_node		*head;
	int			size;
}	t_stack;

typedef struct s_node
{
	int					data;
	struct s_node		*next;
	int					s_index;
}	t_node;

void	push(t_stack *stack_a, t_stack *stack_b, char c, int s_n_bool);
void	reverse_rotate(t_stack *stack, char c, int s_n_bool);
void	reverse_rotate_both(t_stack *stack_a, t_stack *stack_b);
void	rotate(t_stack *stack, char c, int s_n_bool);
void	rotate_both(t_stack *stack_a, t_stack *stack_b);
void	swap(t_stack *stack, char c, int s_n_bool);
void	swap_both(t_stack *stack_a, t_stack *stack_b);

#endif
