/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_move_type.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhajji <yhajji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/11 23:37:22 by yhajji            #+#    #+#             */
/*   Updated: 2025/01/20 11:02:04 by yhajji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	two_up(t_stack **a, t_stack **b, t_stack *top, t_stack *best)
{
	while ((*a)->nbr != top->nbr && (*b)->nbr != best->nbr)
		ft_rr(a, b, 0);
	while ((*a)->nbr != top->nbr)
		ft_ra(a, 0);
	while ((*b)->nbr != best->nbr)
		ft_rb(b, 0);
}

void	two_down(t_stack **a, t_stack **b, t_stack *top, t_stack *best)
{
	while ((*a)->nbr != top->nbr && (*b)->nbr != best->nbr)
		ft_rrr(a, b, 0);
	while ((*a)->nbr != top->nbr)
		ft_rra(a, 0);
	while ((*b)->nbr != best->nbr)
		ft_rrb(b, 0);
}

void	up_down(t_stack **a, t_stack **b, t_stack *top, t_stack *best)
{
	while ((*a)->nbr != top->nbr)
		ft_ra(a, 0);
	while ((*b)->nbr != best->nbr)
		ft_rrb(b, 0);
}

void	down_up(t_stack **a, t_stack **b, t_stack *top, t_stack *best)
{
	while ((*a)->nbr != top->nbr)
		ft_rra(a, 0);
	while ((*b)->nbr != best->nbr)
		ft_rb(b, 0);
}
