/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_checker.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhajji <yhajji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 10:00:00 by yhajji            #+#    #+#             */
/*   Updated: 2025/01/13 11:44:25 by yhajji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void ft_push(t_stack **src, t_stack **dest)
{
    t_stack *help;

    if (!*src)  // Check if source stack is empty
        return;

    help = (*src);          // Save the top element of src
    (*src) = (*src)->next;  // Move src to the next element
    help->next = (*dest);   // Link the saved element to the top of dest
    (*dest) = help;         // Update dest to point to the new top element

    // ft_give_the_stack_index(src);
    // ft_give_the_stack_index(dest);
}

void ft_pa(t_stack **a , t_stack **b, int _write_it)
{
    ft_push(b, a);
   
   // print_stack(*b, 'B');
   // print_stack(*a, 'A');
    if (_write_it == 0)
        write(1, "pa\n", 3);
}

void ft_pb(t_stack **a, t_stack **b, int _write_it)
{
    ft_push(a, b);
    // print_stack(*a, 'A');
    // print_stack(*b, 'B');
    if (_write_it == 0)
        write(1, "pb\n", 3);
}
