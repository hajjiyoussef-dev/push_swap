/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reverse_rotate.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhajji <yhajji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 18:21:34 by yhajji            #+#    #+#             */
/*   Updated: 2025/01/06 21:12:23 by yhajji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void ft_reverse_rotate(t_stack **stack)
{
    t_stack *help;
    t_stack *heade;

    if (!(*stack) || !(*stack)->next)
        return;
    help = ft_lst_last(*stack);
    heade = *stack;
    while (heade->next->next)
        heade = heade->next;
    heade->next = NULL;
    
    if (*stack)
        help->next = *stack; // the next of the last node is ponte on the address of the head (*stack)
    *stack = help; // the value of the (stack) == heade will be set to the  value of the last node that save on the varible help ==>
    ft_give_the_stack_index(stack);
}

void ft_rra(t_stack **a, int _write_it)
{
    ft_reverse_rotate(a);
    // t_stack *current = *a;
    // while (current)
    // {
    //     printf("%d\n", current->nbr);
    //     current = current->next;
    // }
    if (_write_it == 0)
        write(1, "rra\n", 4);
}