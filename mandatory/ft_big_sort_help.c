/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_big_sort_help.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhajji <yhajji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/11 02:55:29 by yhajji            #+#    #+#             */
/*   Updated: 2025/01/11 03:05:35 by yhajji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack *min_nbr(t_stack *a)
{
    t_stack *help;
    t_stack *min;

    min = a;
    help = a;
    while (a)
    {
        if (a->nbr < min->nbr)
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
    t_stack *help;
    t_stack *max;

    max = a;
    help = a;
    while (a)
    {
        if (a->nbr > max->nbr)
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