/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bubble_sort.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enogueir <enogueir@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 17:25:55 by enogueir          #+#    #+#             */
/*   Updated: 2024/12/24 13:25:50 by enogueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bubble_sort(int *array, int size)
{
	int	i;
	int	v;
	int	temp;

	if (!array || size <= 1)
		return ;
	v = 1;
	while (v)
	{
		v = 0;
		i = 0;
		while (i < size - 1)
		{
			if (array[i] > array[i + 1])
			{
				temp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = temp;
				v = 1;
			}
			i++;
		}
		size--;
	}
}
