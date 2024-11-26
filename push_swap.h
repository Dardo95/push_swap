/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enogueir <enogueir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 18:46:03 by enogueir          #+#    #+#             */
/*   Updated: 2024/11/25 19:02:48 by enogueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

typedef struct s_node
{
	int					data;
	struct s_node		*c;
	int					s_index;
}	t_node;

typedef struct s_stack
{
	t_node		*head;
	int			size;
}	t_stack;

#endif
