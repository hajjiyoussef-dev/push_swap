/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_give_the_stack_index.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhajji <yhajji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/04 00:52:06 by yhajji            #+#    #+#             */
/*   Updated: 2025/01/04 00:54:49 by yhajji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack ft_give_the_stack_index(t_stack **stack)
{
    int i;
    t_stack *help;

    i = 0;
    help = *stack;
    while (help)
    {
        help->index = i++;
        help = help->next;
    }
    help = NULL;
}