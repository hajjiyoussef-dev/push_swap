/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_index_moves.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhajji <yhajji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 09:11:42 by yhajji            #+#    #+#             */
/*   Updated: 2025/01/11 09:40:59 by yhajji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int get_best_move(int a, int b, int c, int d)
{
    if (a <= b && a <= c && a <= d)
        return (a);
    if (b <= a && b <= c && b <= d)
        return (b);
    if (c <= a && c <= b && c <= d)
        return (c);
    if (d <= a && d <= b && d <= c)
        return (c);
    return (0);
}

int get_max(int a, int b)
{
    if (a > b)
        return(a);
    return(b);
    
}

int get_moves(t_stack *a, t_stack *b, t_stack *help, t_stack *top)
{
    int	two_up;
	int	two_down;
	int	up_down;
	int	down_up;

    two_up = get_max(top->index, help->index); // ra && rb
    two_down = get_max((ft_size(a) - help->index), (ft_size(b) - top->index)); // rra && rrb
    up_down = top->index + (ft_size(b) - top->index); // ra && rrb
    down_up = help->index + (ft_size(a) - top->index); //rra && ra
    return(get_best_move(two_up, two_down, up_down, down_up));
}


t_stack *get_top(t_stack *a, t_stack *help) // retur a pointer to the next node to but it befor it 
{
    // see if the number comes befor the min nbr in a or after the max number in a
    if (help->nbr < min_nbr(a)->nbr || help->nbr > max_nbr(a)->nbr)
            return (min_nbr(a));
    if (a->nbr > help->nbr && ft_lst_last(a)->nbr < help->nbr) 
            return (a);
    while (a && a->next)
    {
        if (a->nbr < help->nbr && a->next->nbr > help->nbr)
            return (a->next);
        a = a->next;
    }
    
    return (NULL);
}