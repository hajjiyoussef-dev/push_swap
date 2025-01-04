/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lists.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhajji <yhajji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/03 22:08:19 by yhajji            #+#    #+#             */
/*   Updated: 2025/01/04 11:06:32 by yhajji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void ft_free(t_stack **lst)
{
    t_stack *help;
    
    if (!lst)
        return ;
    while (*lst)
    {
        help = (*lst)->next;
        (*lst)->nbr = 0;
        free(lst);
        *lst = help;
    }
    *lst =  NULL;
    
}

t_stack *ft_new_stack(int content)
{
    t_stack *new;

    new = malloc(sizeof(t_stack));
    if (!new)
    {
        ft_free(&new);
        ft_error();
    }
    new->nbr = content;
    new->next = NULL;
    return (new);
}


t_stack *ft_lst_last(t_stack *lst)
{
    if (!lst)
        return (NULL);
    while (lst->next != NULL)
        lst = lst->next;
    return (lst);
}


void ft_lst_add_back(t_stack **stack, t_stack *new_stack)
{
    if (!stack)
        return ;
    if (!*stack)
        *stack = new_stack;
    else
        (ft_lst_last(*stack))->next = new_stack;
}

int ft_check_if_dup(t_stack *a)
{
    t_stack *help;

    while (a)
    {
        help = a->next;
        while (help)
        {
            if (a->nbr == help->nbr)
                return (1);
            else
            help = help->next;
        }
        a = a->next;
    }
    return (0);
}
