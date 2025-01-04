/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_help.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhajji <yhajji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/04 16:21:22 by yhajji            #+#    #+#             */
/*   Updated: 2025/01/04 19:08:13 by yhajji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


size_t ft_size(t_stack *a)
{
    size_t i ;

    i = 0;
    if (!a)
        ft_error();
    while (a)
    {
        a = a->next;
        i++;
    }
     return (i);  
}

int ft_mqadin(t_stack *a)
{
    t_stack *help;
    size_t i;
    size_t size;
    
    i = 1;
    size = ft_size(a);
    if (!a)
        ft_error();
    help = a->next;
    while (a && help)
    {
        if (a->nbr > help->nbr)
            break;
        i++;
        help = help->next;
        a = a->next;
    }
    if (size == i)
        return (1);
    return (0);
}
