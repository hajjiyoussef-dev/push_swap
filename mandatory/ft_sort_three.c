/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_three.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhajji <yhajji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 13:09:00 by yhajji            #+#    #+#             */
/*   Updated: 2025/01/06 18:20:48 by yhajji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


void ft_sort_three(t_stack **a)
{
    //int max;
    //  if (a->nbr > a->next->nbr < a->next->next->nbr)
    //     ft_ra(a, 0);
    if ((*a)->nbr > (*a)->next->nbr < (*a)->next->next->nbr)
        ft_ra(a, 0);
    else if ((*a)->nbr > (*a)->next->nbr > (*a)->next->next->nbr)
    {
        ft_sa(a, 0);
        
        
    }
    
}