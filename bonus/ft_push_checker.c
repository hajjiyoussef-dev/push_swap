/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_checker.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhajji <yhajji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 10:00:00 by yhajji            #+#    #+#             */
/*   Updated: 2025/01/20 14:00:18 by yhajji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	ft_push(t_stack **src, t_stack **dest)
{
	t_stack	*help;

	if (!*src)
		return ;
	help = (*src);
	(*src) = (*src)->next;
	help->next = (*dest);
	(*dest) = help;
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
