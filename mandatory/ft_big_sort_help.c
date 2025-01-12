/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_big_sort_help.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhajji <yhajji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/11 02:55:29 by yhajji            #+#    #+#             */
/*   Updated: 2025/01/11 23:11:01 by yhajji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack *min_nbr(t_stack *a)
{
    t_stack *help;
    int     min;

    min = a->nbr;
    help = a;
    while (a)
    {
        if (a->nbr < min)
            min = a->nbr;
        a = a->next;
    }
    while (help)
    {
        if (help->nbr == min)
            return (help);
        help = help->next;
    }
    return (NULL);
}

t_stack *max_nbr(t_stack *a)
{
    t_stack     *help;
    int         max;

    max = a->nbr;
    help = a;
    while (a)
    {
        if (a->nbr > max)
            max = a->nbr;
        a = a->next;
    }
    while (help)
    {
        if(help->nbr == max)
            return (help);
        help =  help->next;
    }
    return (NULL);
}

t_stack *ft_best_elem(t_stack **stack)
{
    t_stack *best;
    t_stack *help;

    help = *stack;
    best = *stack;
    while (help)
    {
        if (help->moves < best->moves)
            best =  help;
        help =  help->next;
    }
    return (best);
}