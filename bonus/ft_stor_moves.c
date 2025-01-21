/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stor_moves.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhajji <yhajji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 13:35:14 by yhajji            #+#    #+#             */
/*   Updated: 2025/01/21 14:19:16 by yhajji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

t_move	*ft_lst_last_move(t_move *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next != NULL)
		lst = lst->next;
	return (lst);
}

void	ft_lst_add_back_move(t_move **stack, t_move *new_stack)
{
	if (!stack)
		return ;
	if (!*stack)
		*stack = new_stack;
	else
		(ft_lst_last_move(*stack))->next = new_stack;
}

t_move	*ft_new_stack_moves(char *content)
{
	t_move	*new;

	new = malloc(sizeof(t_move));
	if (!new)
		ft_error();
	new->data = ft_strdup(content);
	if (!new->data)
	{
		free(new);
		ft_error();
	}
	new->next = NULL;
	return (new);
}

void	ft_clear_move(t_move **moves)
{
	t_move	*temp;

	while (*moves)
	{
		temp = (*moves)->next;
		free((*moves)->data);
		free(*moves);
		*moves = temp;
	}
}
