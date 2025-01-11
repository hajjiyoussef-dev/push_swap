/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_big_sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhajji <yhajji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 08:54:22 by yhajji            #+#    #+#             */
/*   Updated: 2025/01/11 09:55:32 by yhajji           ###   ########.fr       */
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
        help->moves = get_moves(a, *b, help, top) + 1;
        
       // printf("For number %d in Stack B, moves: %d\n", help->nbr, help->moves);
        
        help = help->next;
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
//     size_a = size_a + 1;
//    t_stack *current = *b;
//     while (current)
//     {
//         printf("Number: %d, Moves: %d\n", current->nbr, current->moves);
//         current = current->next;
//     }
    
}