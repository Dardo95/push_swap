/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enogueir <enogueir@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 16:46:38 by enogueir          #+#    #+#             */
/*   Updated: 2025/02/13 11:39:13 by enogueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static size_t	validate_and_count_in_arg(const char *arg)
{
	size_t	count;
	int		i;
	int		found_digit;

	count = 0;
	i = 0;
	found_digit = 0;
	while (arg[i])
	{
		if (!ft_isdigit(arg[i]) && arg[i] != ' '
			&& arg[i] != '+' && arg[i] != '-')
			ft_error("Error\n");
		if ((arg[i] == '-' && !ft_isdigit(arg[i + 1]))
			|| (arg[i] == '+' && !ft_isdigit(arg[i + 1])))
			ft_error("Error\n");
		if (ft_isdigit(arg[i]) && (arg[i + 1] == ' ' || arg[i + 1] == '\0'))
			count++;
		if (ft_isdigit(arg[i]))
			found_digit = 1;
		i++;
	}
	if (!found_digit)
		ft_error("Error\n");
	return (count);
}

size_t	count_numbers(int argc, char **argv)
{
	size_t	total;
	int		i;

	total = 0;
	i = 1;
	while (i < argc)
	{
		total += validate_and_count_in_arg(argv[i]);
		i++;
	}
	return (total);
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
			check_limits(split_num[j], split_num, array);
			array[index++] = ft_atoi(split_num[j]);
			free(split_num[j]);
			j++;
		}
		free(split_num);
		i++;
	}
}

int	*init_parse(int argc, char **argv, size_t *count)
{
	int	*array;

	*count = count_numbers(argc, argv);
	if (*count == 0)
		ft_error("Error\n");
	array = malloc(sizeof(int) * (*count));
	if (!array)
		ft_error("Error\n");
	farray(argc, argv, array);
	check_duplicates(array, *count);
	return (array);
}

/* int strlen_num(int num)
{
	int res = 0;

	if (num == 0)
		return (1);
	if(num < 0)
	{
		res++;
		num = -num;
	}
	while (num > 0)
	{
		res++;
		num /= 10;
	}
	return (res);
} */