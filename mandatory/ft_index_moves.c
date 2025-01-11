/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_index_moves.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhajji <yhajji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 09:11:42 by yhajji            #+#    #+#             */
/*   Updated: 2025/01/11 06:14:05 by yhajji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int get_max(int a, int b)
{
    if (a > b)
        return(a);
    return(b);
    
}

t_stack *get_moves(t_stack *a, t_stack *b, t_stack *help, t_stack *top)
{
    int	two_up;
	int	two_down;
	int	up_down;
	int	down_up;

    two_up = get_max(top->index, help->index);
    
}


t_stack *get_top(t_stack *a, t_stack *help) // retur a pointer to the next node to but it befor it 
{
    // see if the number comes befor the min nbr in a or after the max number in a
    if (help->nbr < min_nbr(a) || help->nbr > max_nbr(a))
            return (min_nbr(a));
    if (a->nbr > help->nbr && ft_lst_last(a) < help->nbr) 
            return (a);
    while (a && a->next)
    {
        if (a->nbr < help->nbr && a->next->nbr > help->nbr)
            return (a->next);
        a = a->next;
    }
    
    return (NULL);
}