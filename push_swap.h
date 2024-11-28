/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enogueir <enogueir@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 12:41:44 by enogueir          #+#    #+#             */
/*   Updated: 2024/11/28 14:28:10 by enogueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"

typedef struct s_stack
{
	t_node		*head;
	int			size;
}	t_stack;

typedef struct s_node
{
	int					data;
	struct s_node		*next;
	int					s_index;
}	t_node;

#endif
