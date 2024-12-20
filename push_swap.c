/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enogueir <enogueir@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 13:26:49 by enogueir          #+#    #+#             */
/*   Updated: 2024/11/28 14:28:45 by enogueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "push_swap.h"

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
