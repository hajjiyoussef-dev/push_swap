/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhajji <yhajji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 21:46:27 by yhajji            #+#    #+#             */
/*   Updated: 2025/01/20 11:00:50 by yhajji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_push(t_stack **src, t_stack **dest)
{
	t_stack	*help;

	if (!*src)
		return ;
	help = (*src);
	(*src) = (*src)->next;
	help->next = (*dest);
	(*dest) = help;
	ft_give_the_stack_index(src);
	ft_give_the_stack_index(dest);
}

void	ft_pa(t_stack **a, t_stack **b, int _write_it)
{
	ft_push(b, a);
	if (_write_it == 0)
		write(1, "pa\n", 3);
}

void	ft_pb(t_stack **a, t_stack **b, int _write_it)
{
	ft_push(a, b);
	if (_write_it == 0)
		write(1, "pb\n", 3);
}
