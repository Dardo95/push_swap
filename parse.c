/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enogueir <enogueir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 16:46:38 by enogueir          #+#    #+#             */
/*   Updated: 2024/12/13 15:25:45 by enogueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

size_t  count_numbers(int argc, char  **argv)
{
    int i;
    int j;
    int result;

    i = 0;
    result = 0;
    while (i < argc - 1)
    {
        j = 0;
        while (argv[i][j])
        {
            if (!ft_isdigit(argv[i][j]) && argv[i][j] != ' '
                && argv[i][j] != '+' && argv[i][j] != '-')
            {
				ft_error("Error\n", 1);
            }
			if (argv[i][j] = '-' && argv)
			j++;
        }
        i++;
    }
}

int	split_arg(int argc, char **argv)
{
	
}
