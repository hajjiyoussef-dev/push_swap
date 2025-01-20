/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_final_sort.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhajji <yhajji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/12 04:26:08 by yhajji            #+#    #+#             */
/*   Updated: 2025/01/19 23:57:48 by yhajji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_check_min_position(t_stack *a, int min_nbr)
{
	size_t	count;
	size_t	size;

	size = ft_size(a);
	count = 0;
	while (1)
	{
		if (a->nbr == min_nbr)
			break ;
		count++;
		a = a->next;
	}
	if (count > (size / 2))
		return (0);
	return (1);
}

void	ft_final_sort(t_stack **a, t_stack *min_nbr, size_t pos, size_t size_a)
{
	size_a = ft_size(*a);
	while (1)
	{
		if ((*a)->nbr == min_nbr->nbr)
			break ;
		if (pos == 0)
			ft_rra(a, 0);
		if (pos == 1)
			ft_ra(a, 0);
	}
}
