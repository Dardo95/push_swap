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

void check_limits(char *num_str, char **split_num, int *array)
{
    long long num;
    int i;
	
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
        ft_error("Error\n", 1);
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
			ft_error("Error\n", 1);
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
		ft_error("Error\n", 1);
	array = malloc(sizeof(int) * (*count));
	if (!array)
		ft_error("Error\n", 1);
	farray(argc, argv, array);
	check_duplicates(array, *count);
	return(array);
}
