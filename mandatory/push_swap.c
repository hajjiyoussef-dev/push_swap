/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhajji <yhajji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/04 12:30:58 by yhajji            #+#    #+#             */
/*   Updated: 2025/01/13 03:38:52 by yhajji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>


void    ft_sort(t_stack **a, t_stack **b, size_t size_a)
{
    if (size_a == 2)
        ft_sa(a, 0);
    else if (size_a == 3)
        ft_sort_three(a);
    else if (size_a == 5)
        ft_sort_five(a, b, size_a);
    else if (size_a >= 4 && size_a != 5)
    {
        ft_divide_stack(a, b);
        ft_big_sort(a, b, size_a);
    }
}



// void print_stack(t_stack *stack, char stack_name)
// {
//     printf("Stack %c: ", stack_name);
//     while (stack)
//     {
//         printf("%d ", stack->nbr);
//         stack = stack->next;
//     }
//     printf("\n");
// }

int main(int argc, char **argv)
{
    t_stack *a;
    size_t size_a;
    t_stack *b;

    size_a =  0;
    if (argc > 1)
    {
        a = ft_filling_a(argc, argv);
        if (!a || ft_check_if_dup(a))
        {
            ft_free(&a);
            ft_error();
        }
        size_a = ft_size(a);
        b = NULL;

        if (!ft_ale_sorted(a))
        {
               ft_sort(&a, &b, size_a);   
        }
        ft_free(&a);
        ft_free(&b);
    }
    return (0); 
}
