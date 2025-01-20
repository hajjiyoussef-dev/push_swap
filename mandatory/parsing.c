/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhajji <yhajji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/03 19:49:56 by yhajji            #+#    #+#             */
/*   Updated: 2025/01/19 05:10:51 by yhajji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_free_tab(char **tab)
{
	size_t	i;

	i = 0;
	while (tab[i])
	{
		free(tab[i]);
		i++;
	}
	free(tab);
}

int	ft_is_space(char *argv)
{
	int	i;
	int	is_space;

	i = 0;
	is_space = 0;
	while (argv[i])
	{
		if (argv[i] == ' ' || argv[i] == '\t')
			is_space++;
		i++;
	}
	if (i == is_space)
		return (0);
	return (1);
}

int	ft_argv_empty(char **argv)
{
	int	i;

	i = 0;
	while (argv[i])
	{
		if (!(argv[i][0]))
			return (0);
		if (!(ft_is_space(argv[i])))
			return (0);
		i++;
	}
	return (1);
}

t_stack	*ft_filling_a(int argc, char **argv)
{
	t_stack	*a;
	char	*s;
	char	**str;
	int		i;
	int		num;

	if (!(ft_argv_empty(argv)))
		ft_error();
	a = NULL;
	s = ft_strjoin(argc - 1, argv + 1, " ");
	// joine all the argemment withe space between theme !!
	if (!s)
		ft_error();
	str = ft_split(s, ' '); // splite all the agremment withe the sepa space ??
	free(s);
	if (!str)
		(free(s), ft_error());
	i = -1;
	while (str[++i])
	{
		num = ft_atoi(str[i], &a, str);
		ft_lst_add_back(&a, ft_new_stack(num));
	}
	ft_free_tab(str);
	ft_give_the_stack_index(&a);
	return (a);
}
