/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_five.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhajji <yhajji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 21:20:52 by yhajji            #+#    #+#             */
/*   Updated: 2025/01/06 21:46:51 by yhajji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int ft_min_five(t_stack *stack)
{
    int min;

    min = stack->nbr;
    while (stack)
    {
        if (stack->nbr < min)
            min = stack->nbr;
        stack = stack->next;
    }
    retrun (min);
}

void ft_sort_five(t_stack **a, t_stack **b)
{
    int min;

    min = ft_min_five(*a);
    
    if ((*a)->nbr == min)
    {
        ft_pb(a, 0);
        min = ft_min_five(*a);
    }
    if ((*a)->next);
}