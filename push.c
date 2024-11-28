/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enogueir <enogueir@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 12:47:16 by enogueir          #+#    #+#             */
/*   Updated: 2024/11/28 14:30:42 by enogueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	move_node(t_stack *src, t_stack *dst)
{
	t_node	*temp;

	temp = src->head;
	src->head = src->head->next;
	src->size--;
	temp->next = dst->head;
	dst->head = temp;
	dst->size++;
}

void	push(t_stack *stack_a, t_stack *stack_b, char c, int s_n_bool)
{
	if (c == 'a' && stack_b->head != NULL)
	{
		move_node(stack_b, stack_a);
	}
	else if (c == 'b' && stack_a->head != NULL)
	{
		move_node(stack_a, stack_b);
	}
	if (s_n_bool)
	{
		write(1, "p", 1);
		write(1, &c, 1);
		write(1, "\n", 1);
	}
}
