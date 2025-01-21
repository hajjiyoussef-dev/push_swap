/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_five.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhajji <yhajji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 21:20:52 by yhajji            #+#    #+#             */
/*   Updated: 2025/01/20 13:38:54 by yhajji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_min_five(t_stack *stack)
{
	int	min;

	if (!stack)
		return (__INT_MAX__);
	min = stack->nbr;
	while (stack)
	{
		if (stack->nbr < min)
			min = stack->nbr;
		stack = stack->next;
	}
	return (min);
}

int	ft_seconed_min(t_stack *stack, int min)
{
	int	seconed_min;

	seconed_min = __INT_MAX__;
	while (stack)
	{
		if (stack->nbr != min && stack->nbr < seconed_min)
			seconed_min = stack->nbr;
		stack = stack->next;
	}
	return (seconed_min);
}

// void ft_sort_five(t_stack **a, t_stack **b, size_t size_a)
// {
//     int min;
//     int seconed_min;
//     t_stack *help;

//     while (size_a > 3)
//     {
//         min = ft_min_five(*a);
//         help = (*a);
//         while (help && help->nbr != min)
//             help = help->next;
//         while ((*a) != help)
//             ft_ra(a, 0);
//         ft_pb(a, b, 0);
//         size_a--;
//         seconed_min = ft_seconed_min(*a , min);
//         help = *a;
//         while (help && help->nbr != seconed_min)
//             help = help->next;
//         while (*a != help)
//             ft_ra(a, 0);
//         ft_pb(a, b, 0);
//         size_a--;
//     }
//     ft_sort_three(a);
//     (ft_pa(b, a, 0), ft_pa(b, a, 0));
// }

void	ft_sort_five(t_stack **a, t_stack **b, size_t size_a)
{
	int		min;
	t_stack	*help;
	size_t	position;
	size_t	stack_size;

	while (size_a-- > 3)
	{
		min = ft_min_five(*a);
		help = *a;
		position = 0;
		while (help && help->nbr != min)
		{
			help = help->next;
			position++;
		}
		stack_size = ft_size(*a);
		if (position <= stack_size / 2)
			while ((*a)->nbr != min)
				ft_ra(a, 0);
		else
			while ((*a)->nbr != min)
				ft_rra(a, 0);
		ft_pb(a, b, 0);
	}
	(ft_sort_three(a), ft_pa(b, a, 0), ft_pa(b, a, 0));
}
