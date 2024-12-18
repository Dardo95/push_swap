/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enogueir <enogueir@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 16:46:38 by enogueir          #+#    #+#             */
/*   Updated: 2024/12/18 17:25:16 by enogueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

size_t	count_numbers(int argc, char **argv)
{
	int		i;
	int		j;
	size_t	result;

	i = 1;
	result = 0;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j])
		{
			if (!ft_isdigit(argv[i][j]) && argv[i][j] != ' '
				&& argv[i][j] != '+' && argv[i][j] != '-')
				ft_error("Error\n", 1);
			if ((argv[i][j] == '-' && !ft_isdigit(argv[i][j + 1]))
				|| (argv[i][j] == '+' && !ft_isdigit(argv[i][j + 1])))
				ft_error("Error\n", 1);
			if (ft_isdigit(argv[i][j]) && (argv[i][j + 1] == ' ' || argv[i][j
					+ 1] == '\0'))
				result += 1;
			j++;
		}
		i++;
	}
	return (result);
}

int	check_limits(int argc, char **argv)
{
	int			i;
	long long	num;

	i = 1;
	while (i < argc)
	{
		num = ft_atoll(argv[i]);
		if (num < INT_MIN || num > INT_MAX)
			ft_error("Error\n", 1);
		i++;
	}
	return (1);
}

void	check_duplicates(int *numbers, size_t len)
{
	int	i;
	int	j;

	i = 0;
	while (i < len - 1)
	{
		j = i + 1;
		while (j < len)
		{
			if (numbers[i] == numbers[j])
			{
				free(numbers);
				ft_error("Error\n", 1);
			}
			j++;
		}
		i++;
	}
}

void	farray(int argc, char **argv, int *array)
{
	int		i;
	int		j;
	int		index;
	char	**split_num;

	i = 1;
	index = 0;
	while (i < argc)
	{
		split_num = ft_split(argv[i], ' ');
		if (!split_num)
			ft_error("Error\n");
		j = 0;
		while (split_num[j])
		{
			check_limits(split_num[j]);
			array[index++] = ft_atoi(split_num[j]);
			free(split_num[j]);
			j++;
		}
		free(split_num);
		i++;
	}
}


int	*init_parse(int argc, char **argv, size *count)
{
	int	*array;

	*count = count_numbers(argc, argv);
	array = malloc(sizeof(int) * count);
	farray(argc, argv, array);
	check_duplicates(array, *count);
	return(array);
}
