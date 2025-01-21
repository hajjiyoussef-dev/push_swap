/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error_checker.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhajji <yhajji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 06:37:14 by yhajji            #+#    #+#             */
/*   Updated: 2025/01/21 14:02:49 by yhajji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	ft_free_and_exit(t_stack **a, char *str, t_move **moves, t_stack **b)
{
	int	i;

	i = 0;
	ft_free(b);
	ft_clear_move(moves);
	ft_free(a);
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

void	ft_error(void)
{
	write(1, "Error\n", 6);
	exit(1);
}
