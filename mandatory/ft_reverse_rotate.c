/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reverse_rotate.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhajji <yhajji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 18:21:34 by yhajji            #+#    #+#             */
/*   Updated: 2025/01/06 18:57:52 by yhajji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void ft_reverse_rotate(t_stack **stack)
{
    t_stack *first;
    t_stack *last;

    if (!(*stack) || !(*stack)->next)
        return;
    
    *stack = ft_lst_last(*stack);
}