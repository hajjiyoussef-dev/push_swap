/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_big_sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhajji <yhajji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 08:54:22 by yhajji            #+#    #+#             */
/*   Updated: 2025/01/10 09:07:47 by yhajji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void ft_looking_for_moves(t_stack *a, t_stack **b)
{
    t_stack *help;
    t_stack *top;

    help = *b;
    while (help)
    {
        top = get_top(a, help);
    }
    
}


void ft_big_sort(t_stack **a, t_stack **b, size_t size_a)
{
    size_t size_b;
    
    size_b = ft_size(*b);
    while (size_b--)
    {
        ft_looking_for_moves(*a, b);
    }
    
}