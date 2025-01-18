/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_help.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhajji <yhajji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 06:47:45 by yhajji            #+#    #+#             */
/*   Updated: 2025/01/18 02:22:19 by yhajji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

size_t ft_size_stack_a(t_stack *a)
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
    size = ft_size_stack_a(a);
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
        return (0);
    return (1);
}


void ft_check_typeof_move(t_stack **a, t_stack **b, char *line)
{
    if (ft_strncmp(line, "sa\n", 3) == 0)
        ft_sa(a, 1);
    else if (ft_strncmp(line, "sb\n", 3) == 0)
        ft_sb(b, 1);
    else if (ft_strncmp(line, "ss\n", 3) == 0)
        ft_ss(a, b, 1);
    else if (ft_strncmp(line, "ra\n", 3) == 0)
        ft_ra(a, 1);
    else if (ft_strncmp(line, "rb\n", 3) == 0)
        ft_rb(b, 1);
    else if (ft_strncmp(line, "rr\n", 3) == 0)
        ft_rr(a, b, 1);
    else if (ft_strncmp(line, "rra\n", 4) == 0)
        ft_rra(a, 1);
    else if (ft_strncmp(line, "rrb\n", 4) == 0)
        ft_rrb(b, 1);
    else if (ft_strncmp(line, "rrr\n", 4) == 0)
        ft_rrr(a, b, 1);
    else if (ft_strncmp(line, "pa\n", 3) == 0)
        ft_pa(a, b, 1);
    else if (ft_strncmp(line, "pb\n", 3) == 0)
        ft_pb(a, b, 1);
}
size_t ft_size_stack_b(t_stack *b)
{
    size_t i ;

    i = 0;
    while (b != NULL)
    {
        i++;
        b = b->next;
    }
     return (i);  
}
int ft_check_sort(t_stack **a, t_stack **b)
{
    if (!ft_ale_sorted(*a) && ft_size_stack_b(*b) == 0)
    {
        // write(1, "OK\n", 3);
        // ft_free(a);
        return (0);
    }
    else
    {
        // write(1, "KO\n", 3);
        // ft_free(a);
        // if (*b)
        //     ft_free(b);
        return (1);
    }
}