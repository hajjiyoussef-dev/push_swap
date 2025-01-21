/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhajji <yhajji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 12:34:49 by yhajji            #+#    #+#             */
/*   Updated: 2025/01/20 10:14:15 by yhajji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_rotate(t_stack **stack_a)
{
	t_stack	*first;
	t_stack	*last;

	if (!(*stack_a) || !(*stack_a)->next)
		return ;
	first = *stack_a;
	*stack_a = first->next;
	last = ft_lst_last(*stack_a);
	first->next = NULL;
	last->next = first;
	ft_give_the_stack_index(stack_a);
}

void	ft_ra(t_stack **a, int _write_it)
{
	ft_rotate(a);
	if (_write_it == 0)
		write(1, "ra\n", 3);
}

void	ft_rb(t_stack **b, int _write_it)
{
	ft_rotate(b);
	if (_write_it == 0)
		write(1, "rb\n", 3);
}

void	ft_rr(t_stack **a, t_stack **b, int _write_it)
{
	ft_rotate(a);
	ft_rotate(b);
	if (_write_it == 0)
		write(1, "rr\n", 3);
}
