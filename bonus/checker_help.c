/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_help.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhajji <yhajji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 06:47:45 by yhajji            #+#    #+#             */
/*   Updated: 2025/01/13 09:23:38 by yhajji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void ft_check_typeof_move(t_stack **a, t_stack **b, char *line)
{
    if (ft_strcmp(line, "sa\n") == 0)
        ft_sa(a, 0);
    else if (ft_strcmp(line, "sb\n") == 0)
        ft_sb(b, 0);
    else if (ft_strcmp(line, "ss\n") == 0)
        (ft_ss(a, 0), ft_ss(b, 0));
    else if (ft_strcmp(line, "ra\n") == 0)
        ft_ra(a, 0);
    else if (ft_strcmp(line, 'rb\n') == 0)
        ft_rb(b, 0);
    else if (ft_strcmp(line, "rr\n") == 0)
        (ft_rr(a, 0), ft_rr(b, 0));
    else if (ft_strcmp(line, "rra\n") == 0)
        ft_rra(a, 0);
    else if (ft_strcmp(line, "rrb\n") == 0)
        ft_rrb(b, 0);
    else if (ft_strcmp(line, "rrr\n") == 0)
        (ft_rrr(a, 0), ft_rrr(b, 0));
    else if (ft_strcmp(line, "pa\n") == 0)
        ft_pa(a, 0);
    else if (ft_strcmp(line, "pb\n") == 0)
        ft_pb(b, 0);
}