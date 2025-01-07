/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_five.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhajji <yhajji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 21:20:52 by yhajji            #+#    #+#             */
/*   Updated: 2025/01/07 21:05:29 by yhajji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int ft_min_five(t_stack *stack)
{
    int min;

    if (!stack)
        return (__INT_MAX__) ;
    min = stack->nbr;
    while (stack)
    {
        if (stack->nbr < min)
            min = stack->nbr;
        stack = stack->next;
    }
    
    return (min);
}
// int ft_seconed_min(t_stack *stack, int min)
// {
//     int seconed_min;

//     seconed_min = min;
//     min = stack->nbr;
//     while (stack)
//     {
//         if ((stack)->nbr != min && stack->nbr < seconed_min)
//             seconed_min = stack->nbr;
//         stack = stack->next;
//     }
//     printf("\n\n\n\n\n\n\n\n\n%d\n\n\n\n\n\n\n\n\n", seconed_min);
//     return (seconed_min); 
// }

int ft_seconed_min(t_stack *stack, int min)
{
    int seconed_min;

    seconed_min = __INT_MAX__;  // Initialize to a large value

    while (stack)
    {
        if (stack->nbr != min && stack->nbr < seconed_min)  // Find the smallest number not equal to min
            seconed_min = stack->nbr;
        stack = stack->next;
    }

    printf("\nSecond min: %d\n", seconed_min);  // Debugging output
    return (seconed_min); 
}


void ft_sort_five(t_stack **a, t_stack **b, size_t size_a)
{
    int min;
    int seconed_min;
    t_stack *help;
    
    while (size_a > 3)
    {
        min = ft_min_five(*a);
        help = (*a);
        while (help && help->nbr != min)
            help = help->next;
        while ((*a) != help)
            ft_ra(a, 0);
        ft_pb(a, b, 0);
        size_a--;
        seconed_min = ft_seconed_min(*a , min);
        help = *a;
        while (help && help->nbr != seconed_min)
            help = help->next;
        while (*a != help)
            ft_ra(a, 0);
        ft_pb(a, b, 0);
        size_a--;
    }
    ft_sort_three(a);
    ft_pa(b, a, 0);
    ft_pa(b, a, 0);
             t_stack *current = *b;
            while (current)
            {
                printf("%d\n", current->nbr);
                current = current->next;
            }
}

