/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhajji <yhajji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/05 21:21:29 by yhajji            #+#    #+#             */
/*   Updated: 2025/01/05 21:31:49 by yhajji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


void ft_sa(t_stack *a, int _write)
{
    int n;

    if (!a || !(a->next))
        return;
    n = a->nbr;
    a->nbr =  a->next->nbr;
    a->next->nbr = n ;
    
    if (_write == 0)
        write(1, "sa\n", 3);
    ft_give_the_stack_index(&a);
}