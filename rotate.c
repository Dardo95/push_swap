/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enogueir <enogueir@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 13:53:22 by enogueir          #+#    #+#             */
/*   Updated: 2024/12/23 16:32:45 by enogueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate(t_stack *stack, char c, int s_n_bool)
{
	t_node	*temp;
	t_node	*last;

	if (stack->head == NULL || stack->size <= 1)
	{
		return ;
	}
	temp = stack->head;
	stack->head = stack->head->next;
	last = stack->head;
	while (last->next != NULL)
		last = last->next;
	last->next = temp;
	temp->next = NULL;
	if (s_n_bool)
	{
		write(1, "r", 1);
		write(1, &c, 1);
		write(1, "\n", 1);
	}
}

void	rotate_both(t_stack *stack_a, t_stack *stack_b)
{
	rotate(stack_a, 'a', 0);
	rotate(stack_b, 'b', 0);
	ft_putstr_fd("rr\n", 1);
}
