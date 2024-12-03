/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enogueir <enogueir@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 14:47:05 by enogueir          #+#    #+#             */
/*   Updated: 2024/12/03 16:51:02 by enogueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	reverse_rotate(t_stack *stack, char c, int s_n_bool)
{
	t_node	*temp;
	t_node	*last:

	if (stack->head == NULL || stack->size <= 1)
	{
		return ;
	}

	last = stack->head;
}
