/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_three.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhajji <yhajji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 13:09:00 by yhajji            #+#    #+#             */
/*   Updated: 2025/01/06 21:11:26 by yhajji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


int ft_max_three(t_stack *stack)
{
    int max;
    
    max = stack->nbr;
    while (stack)
    {
        if (stack->nbr > max)
            max = stack->nbr;
        stack = stack->next;
    }
    return (max);
}

void ft_sort_three(t_stack **a)
{
    int max;

    max = ft_max_three(*a);

    if ((*a)->nbr == max)
        ft_ra(a, 0);
    if ((*a)->next->nbr == max)
        ft_rra(a, 0);
    if ((*a)->nbr > (*a)->next->nbr )
        ft_sa(a, 0);
}