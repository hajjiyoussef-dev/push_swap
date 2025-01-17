/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhajji <yhajji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 06:33:48 by yhajji            #+#    #+#             */
/*   Updated: 2025/01/17 08:29:42 by yhajji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

t_stack *ft_new_stack(char *content)
{
    t_move *new;

    new = malloc(sizeof(t_move));
    if (!new)
    {
        ft_free(&new);
        ft_error();
    }
    new->data = content;
    new->next = NULL;
    return (new);
}

int main(int argc, char **argv)
{
    t_stack *a;
    t_stack *b;
    t_move *moves;

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
            while (get_next_line(0) != NULL)
            {
                ft_lst_add_back(moves, ft_new_stack(get_next_line(0)));
            }
            if (!moves)
            {
                ft_free(&moves);
                break;
            }
            ft_check_typeof_move(&a, &b, moves);
        }
        ft_check_sort(&a, &b);
    }
}
