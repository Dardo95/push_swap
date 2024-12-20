/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enogueir <enogueir@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 13:26:49 by enogueir          #+#    #+#             */
/*   Updated: 2024/12/20 17:44:17 by enogueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "push_swap.h"

void init_ps(t_stack *stack_a, t_stack *stack_b, int *array, size_t size)
{
	size_t	i;

	stack_a->head = NULL;
	stack_a->size = 0;
	i = size - 1;
	while(i >= 0)
	{
		push_stack(stack_a, 0, array[i]);
		i--;
	}
	stack_b->head = NULL;
	stack_b->size = 0;
	ft_
}





























int main(int argc, char **argv)
{
    size_t count;
    int *parsed_numbers;
    size_t i;
    // Verificar que se pasen argumentos
    if (argc < 2)
    {
        printf("Error: No se han pasado argumentos\n");
        return (1);
    }
    // Llamar a la función de parseo
    parsed_numbers = init_parse(argc, argv, &count);
    if (!parsed_numbers)
    {
        printf("Error: Fallo al parsear los números\n");
        return (1);
    }
    // Imprimir los números parseados
    printf("Números parseados (%zu):\n", count);
    for (i = 0; i < count; i++)
    {
        printf("%d\n", parsed_numbers[i]);
    }
    // Liberar memoria
    free(parsed_numbers);
    return (0);
}
