/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enogueir <enogueir@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 13:34:55 by enogueir          #+#    #+#             */
/*   Updated: 2024/11/28 12:49:38 by enogueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap(t_stack *stack, char c, int s_n_bool)
{
	t_node	*temp;

	if (stack->head == NULL || stack->size <= 1)
	{
		return ;
	}
	temp = stack->head;
	stack->head = temp->next;
	temp->next = stack->head->next;
	stack->head->next = temp;
	if (s_n_bool)
	{
		write(1, "s", 1);
		write(1, &c, 1);
		write(1, "\n", 1);
	}
}

void	swap_both(t_stack *stack_a, t_stack *stack_b)
{
	swap(stack_a, 'a', 0);
	swap(stack_b, 'b', 0);
	ft_putstr_fd("ss\n", 1);
}
