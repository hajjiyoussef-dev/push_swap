/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhajji <yhajji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/04 12:30:58 by yhajji            #+#    #+#             */
/*   Updated: 2025/01/04 12:31:00 by yhajji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

int main(int argc, char **argv)
{
    t_stack *a;

    if (argc > 1)
    {
        a = ft_filling_a(argc, argv);
        //printf("%d", a->nbr);
        if (!a || ft_check_if_dup(a))
        {
            ft_free(&a);
            ft_error();
        }
    }

    return (0);
    
}