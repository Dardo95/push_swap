/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stacks.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enogueir <enogueir@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 13:01:38 by enogueir          #+#    #+#             */
/*   Updated: 2024/12/24 14:12:48 by enogueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_stack(t_stack *stack, int index, int data)
{
	t_node	*temp;

	temp = (t_node *)malloc(sizeof(t_node));
	if (!temp)
		return ;
	temp->data = data;
	temp->s_index = index;
	temp->next = stack->head;
	stack->head = temp;
	stack->size++;
}

int	del_stack(t_stack *stack)
{
	t_node	*first;
	int		data;

	if (!stack->head)
		exit (1);
	first = stack->head;
	data = first->data;
	stack->head = first->next;
	free(first);
	first = NULL;
	stack->size--;
	return (data);
}
