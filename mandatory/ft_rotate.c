/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate_a.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhajji <yhajji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 12:34:49 by yhajji            #+#    #+#             */
/*   Updated: 2025/01/06 18:13:50 by yhajji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"



void ft_rotate(t_stack **stack_a)
{
    t_stack *first;
    t_stack *last;
    
    if (!(*stack_a) || !(*stack_a)->next)
        return;

    first = *stack_a;
    *stack_a = first->next;  
    last = ft_lst_last(*stack_a);  
    first->next = NULL;  
    last->next = first;  
    ft_give_the_stack_index(stack_a); 
}


void ft_ra(t_stack **a, int _write_it)
{
    ft_rotate(a);
    //t_stack *current = *a;
    // while (current)
    // {
    //     printf("%d\n", current->nbr);
    //     current = current->next;
    // }
    if (_write_it == 0)
        write(1, "ra\n", 3);
}
    

    