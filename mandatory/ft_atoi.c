/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhajji <yhajji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/03 22:06:59 by yhajji            #+#    #+#             */
/*   Updated: 2025/01/03 22:07:16 by yhajji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ft_signal(char c, int *s, size_t *i)
{
	if ((c == '+' || c == '-'))
	{
		if (c == '-')
			(*s) = -1;
		(*i)++;
	}
}

int	ft_atoi(const char *c)
{
	long	res;
	long	temp;
	size_t	i;
	int		s;

	i = 0;
	res = 0;
	s = 1;
	while (c[i] == 32 || (c[i] >= 9 && c[i] <= 13))
		i++;
	ft_signal(c[i], &s, &i);
	while (c[i] != '\0' && (c[i] >= '0' && c[i] <= '9'))
	{
		temp = res;
		res = res * 10 + (c[i++] - 48);
		if ((res / 10) != temp && s == -1)
			return (0);
		if ((res / 10) != temp && s == 1)
			return (-1);
	}
	return ((res * s));
}