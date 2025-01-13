/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_help.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhajji <yhajji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 06:47:45 by yhajji            #+#    #+#             */
/*   Updated: 2025/01/13 11:40:59 by yhajji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

size_t ft_size(t_stack *a)
{
    size_t i ;

    i = 0;
    if (!a)
    {
        write(1, "KO\n", 3);
        exit(1);
    }
    while (a)
    {
        i++;
        a = a->next;
    }
     return (i);  
}

int ft_ale_sorted(t_stack *a)
{
    t_stack *help;
    size_t i;
    size_t size;
    
    i = 1;
    size = ft_size(a);
    if (!a)
    {
        write(1, "KO\n", 3);
        exit(1);
    }
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


void ft_check_typeof_move(t_stack **a, t_stack **b, char *line)
{
    if (ft_strcmp(line, "sa\n") == 0)
        ft_sa(a, 0);
    else if (ft_strcmp(line, "sb\n") == 0)
        ft_sb(b, 0);
    else if (ft_strcmp(line, "ss\n") == 0)
        ft_ss(a, b, 0);
    else if (ft_strcmp(line, "ra\n") == 0)
        ft_ra(a, 0);
    else if (ft_strcmp(line, "rb\n") == 0)
        ft_rb(b, 0);
    else if (ft_strcmp(line, "rr\n") == 0)
        ft_rr(a, b, 0);
    else if (ft_strcmp(line, "rra\n") == 0)
        ft_rra(a, 0);
    else if (ft_strcmp(line, "rrb\n") == 0)
        ft_rrb(b, 0);
    else if (ft_strcmp(line, "rrr\n") == 0)
        ft_rrr(a, b, 0);
    else if (ft_strcmp(line, "pa\n") == 0)
        ft_pa(a, b, 0);
    else if (ft_strcmp(line, "pb\n") == 0)
        ft_pb(a, b, 0);
}

bool b_is_empty(t_stack *b)
{
    return (b = NULL);
}


void ft_check_sort(t_stack **a, t_stack **b)
{
    if (ft_ale_sorted(*a) && b_is_empty(*b))
    {
        write(1, "OK\n", 3);
        ft_free(a);
    }
    else
    {
        write(1, "KO\n", 3);
        ft_free(a);
        if (*b)
            ft_free(b);
    }
}