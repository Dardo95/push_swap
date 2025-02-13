/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enogueir <enogueir@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 13:51:48 by enogueir          #+#    #+#             */
/*   Updated: 2025/02/13 11:38:47 by enogueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	check_limits(char *num_str, char **split_num, int *array)
{
	long long	num;
	int			i;

	num = ft_atoll(num_str);
	if (num < INT_MIN || num > INT_MAX)
	{
		if (split_num)
		{
			i = 0;
			while (split_num[i])
			{
				free(split_num[i]);
				i++;
			}
			free(split_num);
		}
		if (array)
			free(array);
		ft_error("Error\n");
	}
}

void	check_duplicates(int *numbers, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (i < len - 1)
	{
		j = i + 1;
		while (j < len)
		{
			if (numbers[i] == numbers[j])
			{
				free(numbers);
				ft_error("Error\n");
			}
			j++;
		}
		i++;
	}
}
