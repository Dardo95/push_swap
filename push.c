/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enogueir <enogueir@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 12:47:16 by enogueir          #+#    #+#             */
/*   Updated: 2024/12/24 14:16:30 by enogueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push(t_stack *stack_a, t_stack *stack_b, char c, int s_n_bool)
{
	int	index;
	int	data;

	if (stack_a->head == NULL)
		return ;
	index = stack_a->head->s_index;
	data = del_stack(stack_a);
	push_stack(stack_b, index, data);
	if (s_n_bool)
	{
		write(1, "p", 1);
		write(1, &c, 1);
		write(1, "\n", 1);
	}
}
