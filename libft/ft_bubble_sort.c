/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bubble_sort.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enogueir <enogueir@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 17:25:55 by enogueir          #+#    #+#             */
/*   Updated: 2024/12/20 17:27:53 by enogueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	bubble_sort(int *array, int size)
{
	int	temp;
	int	swapped;
	int	index;

	while (size > 1)
	{
		swapped = 0;
		index = 0;
		while (index < size - 1)
		{
			if (array[index] > array[index + 1])
			{
				temp = array[index];
				array[index] = array[index + 1];
				array[index + 1] = temp;
				swapped = 1;
			}
			index++;
		}
		if (!swapped)
			break ;
		size--;
	}
}
