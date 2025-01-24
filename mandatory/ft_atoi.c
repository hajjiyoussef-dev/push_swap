/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhajji <yhajji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/03 22:06:59 by yhajji            #+#    #+#             */
/*   Updated: 2025/01/23 17:08:57 by yhajji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ft_cleanup_exit(t_stack **a, char **allstr)
{
	if (a)
		ft_free(a);
	if (allstr)
		ft_free_tab(allstr);
	ft_error();
}

static int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}

int	help_atoi(long long arr[], const char *str, int *error)
{
	if (!ft_isdigit(str[arr[2]]))
	{
		*error = 1;
		return (0);
	}
	if ((arr[0] > (2147483647 / 10) || (arr[0] == 2147483647 / 10
				&& (str[arr[2]] - '0') > 7)) || (arr[1] == -1
			&& arr[0] == 2147483647 / 10 && (str[arr[2]] - '0') == 8))
	{
		*error = 1;
		return (0);
	}
	arr[0] = (str[arr[2]] - 48) + (arr[0] * 10);
	return (arr[0]);
}

int	ft_atoi(const char *str, t_stack **a, char **allstr)
{
	long long	arr[3];
	int			error;

	error = 0;
	arr[0] = 0;
	arr[1] = 1;
	arr[2] = 0;
	while (str[arr[2]] == ' ' || str[arr[2]] == '\f' || str[arr[2]] == '\n'
		|| str[arr[2]] == '\r' || str[arr[2]] == '\v')
		arr[2]++;
	if (str[arr[2]] == '-' && ft_isdigit(str[arr[2] + 1]))
		arr[1] *= -1;
	if ((str[arr[2]] == '+' && ft_isdigit(str[arr[2] + 1]))
		|| (str[arr[2]] == '-' && ft_isdigit(str[arr[2] + 1])))
		arr[2]++;
	while (str[arr[2]])
	{
		arr[0] = help_atoi(arr, str, &error);
		arr[2]++;
	}
	if (error)
		ft_cleanup_exit(a, allstr);		
	return (arr[0] * arr[1]);
}
