/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reverse_rotate.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhajji <yhajji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 18:21:34 by yhajji            #+#    #+#             */
/*   Updated: 2025/01/20 10:59:32 by yhajji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_reverse_rotate(t_stack **stack)
{
	t_stack	*help;
	t_stack	*heade;

	if (!(*stack) || !(*stack)->next)
		return ;
	help = ft_lst_last(*stack);
	heade = *stack;
	while (heade->next->next)
		heade = heade->next;
	heade->next = NULL;
	if (*stack)
		help->next = *stack;
	*stack = help;
	ft_give_the_stack_index(stack);
}

void	ft_rra(t_stack **a, int _write_it)
{
	ft_reverse_rotate(a);
	if (_write_it == 0)
		write(1, "rra\n", 4);
}

void	ft_rrb(t_stack **b, int _write_it)
{
	ft_reverse_rotate(b);
	if (_write_it == 0)
		write(1, "rrb\n", 4);
}

void	ft_rrr(t_stack **a, t_stack **b, int _write_it)
{
	ft_reverse_rotate(a);
	ft_reverse_rotate(b);
	if (_write_it == 0)
		write(1, "rrr\n", 4);
}
