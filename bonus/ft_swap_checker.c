/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap_checker.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhajji <yhajji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 10:09:15 by yhajji            #+#    #+#             */
/*   Updated: 2025/01/13 11:46:46 by yhajji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void ft_sa(t_stack **a, int _write_it)
{
    int n;

    if (!(*a) || !((*a)->next))
        return;
    n = (*a)->nbr;
    (*a)->nbr =  (*a)->next->nbr;
    (*a)->next->nbr = n ;
    
    if (_write_it == 0)
        write(1, "sa\n", 3);
   // ft_give_the_stack_index(&(*a));
}

void ft_sb(t_stack **b, int _write_it)
{
    int n;

    if (!(*b) || !((*b)->next))
        return;
    n = (*b)->nbr;
    (*b)->nbr =  (*b)->next->nbr;
    (*b)->next->nbr = n ;
    
    if (_write_it == 0)
        write(1, "sb\n", 3);
    //ft_give_the_stack_index(&(*b));
}

void ft_ss(t_stack **a, t_stack **b, int _write_it)
{
    ft_sa(a, 1); 
    ft_sb(b, 1);  
    
    if (_write_it == 0)
        write(1, "ss\n", 3);
}