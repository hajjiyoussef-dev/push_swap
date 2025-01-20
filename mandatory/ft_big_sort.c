/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_big_sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhajji <yhajji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 08:54:22 by yhajji            #+#    #+#             */
/*   Updated: 2025/01/19 23:58:06 by yhajji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_get_best_type(int a, int b, int c, int d)
{
	if (a <= b && a <= c && a <= d)
		return (1);
	if (b <= a && b <= c && b <= d)
		return (2);
	if (c <= a && c <= b && c <= d)
		return (3);
	if (d <= a && d <= b && d <= c)
		return (4);
	return (0);
}

int	get_type(t_stack *a, t_stack *b, t_stack *top, t_stack *best)
{
	int	two_up;
	int	two_down;
	int	up_down;
	int	down_up;

	two_up = get_max(top->index, best->index);
	two_down = get_max((ft_size(a) - top->index), (ft_size(b) - best->index));
	up_down = top->index + (ft_size(b) - best->index);
	down_up = best->index + (ft_size(a) - top->index);
	return (ft_get_best_type(two_up, two_down, up_down, down_up));
}

void	ft_looking_for_moves(t_stack *a, t_stack **b)
{
	t_stack	*help;
	t_stack	*top;

	help = *b;
	while (help)
	{
		top = get_top(a, help);
		help->moves = get_moves(a, *b, help, top) + 1;
		help = help->next;
	}
}

void	ft_push_b_to_a(t_stack **a, t_stack **b)
{
	t_stack	*top;
	t_stack	*best_element;

	best_element = ft_best_elem(*b);
	top = get_top(*a, best_element);
	if (get_type(*a, *b, top, best_element) == 1)
		two_up(a, b, top, best_element);
	else if (get_type(*a, *b, top, best_element) == 2)
		two_down(a, b, top, best_element);
	else if (get_type(*a, *b, top, best_element) == 3)
		up_down(a, b, top, best_element);
	else if (get_type(*a, *b, top, best_element) == 4)
		down_up(a, b, top, best_element);
	ft_pa(a, b, 0);
}

void	ft_big_sort(t_stack **a, t_stack **b, size_t size_a)
{
	size_t	size_b;
	t_stack	*min;
	size_t	pos;

	size_b = ft_size(*b);
	while (size_b--)
	{
		ft_looking_for_moves(*a, b);
		ft_push_b_to_a(a, b);
	}
	min = min_nbr(*a);
	pos = ft_check_min_position(*a, min->nbr);
	ft_final_sort(a, min, pos, size_a);
}
