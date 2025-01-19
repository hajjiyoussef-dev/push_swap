/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhajji <yhajji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/03 22:06:59 by yhajji            #+#    #+#             */
/*   Updated: 2025/01/19 05:24:58 by yhajji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


static	int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}

int help_atoi(int num, const char *str, t_stack **a, char **allstr, int sn, int i)
{
	
	if (!ft_isdigit(str[i]))
	{
		if (a)
			ft_free(a);
		(ft_free_tab(allstr), ft_error());
	}
	if ((num > (2147483647 / 10) || (num == 2147483647 / 10 && (str[i] - '0') > 7)) ||
		(sn == -1 && num == 2147483647 / 10 && (str[i] - '0') == 8))
	{
		if (a)
			ft_free(a);
		(ft_free_tab(allstr), ft_error());
	}
	num = (str[i] - 48) + (num * 10);
	return (num);
	
}

int	ft_atoi(const char *str, t_stack **a, char **allstr)
{
	int		i;
	int		sn;
	long long	num;

	(1) && (i = 0, sn = 1, num = 0);
	while (str[i] == ' ' || str[i] == '\f' || str[i] == '\n' || str[i] == '\r' || str[i] == '\v')
		i++;
	if (str[i] == '-' && ft_isdigit(str[i + 1]))
		sn *= -1;
	if ((str[i] == '+' && ft_isdigit(str[i + 1]))
		|| (str[i] == '-' && ft_isdigit(str[i + 1])))
		i++;
	while (str[i])
	{
		num = help_atoi(num, str, a, allstr, sn, i);
		i++;
	}
	return (num * sn);
}
