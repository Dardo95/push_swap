/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enogueir <enogueir@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 13:26:49 by enogueir          #+#    #+#             */
/*   Updated: 2024/12/24 13:40:21 by enogueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>
#include <stdlib.h>


static int	ft_index(int n, int *array)
{
	int	i;

	i = 0;
	while (array[i] != n)
	{
		i++;
	}
	return (i);
}

void	init_ps(t_stack *stack_a, t_stack *stack_b, int *array, size_t size)
{
	size_t	i;
	t_node	*temp;

	stack_a->head = NULL;
	stack_a->size = 0;
	i = size;
	while (i > 0)
	{
		--i;
		push_stack(stack_a, 0, array[i]);
	}
	stack_b->head = NULL;
	stack_b->size = 0;
	ft_bubble_sort(array, size);
	temp = stack_a->head;
	while (temp)
	{
		temp->s_index = ft_index(temp->data, array);
		temp = temp->next;
	}
}

int main(int argc, char **argv)
{
    t_stack stack_a;
    t_stack stack_b;
    int *array;
    size_t count;

    if (argc == 1)
        return (0);
    array = init_parse(argc, argv, &count);
    if (!array)
        ft_error("Error\n", 1);
    init_ps(&stack_a, &stack_b, array, count);
    sort(&stack_a, &stack_b, array, count);
	free(array);
    free_stack(&stack_a);
	

    return (0);
}
