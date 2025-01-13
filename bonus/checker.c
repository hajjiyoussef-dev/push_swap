/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhajji <yhajji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 06:33:48 by yhajji            #+#    #+#             */
/*   Updated: 2025/01/13 08:57:13 by yhajji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

int main(int argc, char **argv)
{
    t_stack *a;
    t_stack *b;
    char *line;

    if (argc > 1)
    {
        a = ft_filling_a(argc, argv);
        if (!a || ft_check_if_dup(a))
        {
            ft_free(&a);
            ft_error();
        }
        b = NULL;
        while (1)
        {
            line = get_next_line(0);
            if (!line)
            {
                free(&a);
                break;
            }
            ft_check_typeof_move(&a, &b, &line);
            free(line);
        }
        
        
    }
    
}