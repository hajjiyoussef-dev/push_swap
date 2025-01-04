/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhajji <yhajji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/04 12:30:58 by yhajji            #+#    #+#             */
/*   Updated: 2025/01/04 19:30:40 by yhajji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>


t_stack ft_stage_wa7ch()
{
    
}


int main(int argc, char **argv)
{
    t_stack *a;
    size_t size_a;
    t_stack *b;

    if (argc > 1)
    {
        a = ft_filling_a(argc, argv);
        if (!a || ft_check_if_dup(a))
        {
            ft_free(&a);
            ft_error();
        }
       // printf("hello");
        size_a = ft_size(a);
       // printf("%zu", size_a);
        b = NULL;

        if (!ft_mqadin(a))
        {
            ft_stage_wa7ch(&a, &b, size_a);
        }
        ft_free(&a);
        ft_free(&b);
    }
    return (0); 
}