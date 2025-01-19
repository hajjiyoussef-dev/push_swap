/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhajji <yhajji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 06:33:48 by yhajji            #+#    #+#             */
/*   Updated: 2025/01/19 09:14:42 by yhajji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"



void ft_clear_move(t_move **moves)
{
    t_move *temp;

    while (*moves)
    {
        temp = (*moves)->next;
        free((*moves)->data); // Free the string stored in the move
        free(*moves);         // Free the node itself
        *moves = temp;
    }
}

void ft_free_and_exit(t_stack **a, char *str)
{
    ft_free(a);
    int i = 0;
    while (str[i] != '\0')
    {
        write(1, &str[i], 1);
        i++;
    }

}

t_move *ft_new_stack_moves(char *content)
{
    t_move *new;

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
int check_move(char *move)
{
    if(!ft_strncmp(move, "sa\n", 3))
        return (1);
    else if (!ft_strncmp(move, "sb\n", 3))
        return (1);
    else if (!ft_strncmp(move, "ss\n", 3))
        return (1);
    else if (!ft_strncmp(move, "pa\n", 3))
        return (1);
    else if (!ft_strncmp(move, "pb\n", 3))
        return (1);
    else if (!ft_strncmp(move, "ra\n", 3))
        return (1);
    else if (!ft_strncmp(move, "rb\n", 3))
        return (1);
    else if (!ft_strncmp(move, "rr\n", 3))
        return (1);
    else if (!ft_strncmp(move, "rra\n", 4))
        return (1);
    else if (!ft_strncmp(move, "rrb\n", 4))
        return (1);
    else if (!ft_strncmp(move, "rrr\n", 4))
        return (1);
    return (0);    
}
void ft_do_the_moves(t_stack **a, t_stack **b, t_move **moves)
{
    t_move *help;

    help = *moves;

    while (help)
    {
        ft_check_typeof_move(a, b, help->data);
        help = help->next;
    }
    ft_clear_move(moves);
    
}
t_move *ft_lst_last_move(t_move *lst)
{
    if (!lst)
        return (NULL);
    while (lst->next != NULL)
        lst = lst->next;
    return (lst);
}

void ft_lst_add_back_move(t_move **stack, t_move *new_stack)
{
    if (!stack)
        return ;
    if (!*stack)
        *stack = new_stack;
    else
        (ft_lst_last_move(*stack))->next = new_stack;
}




int main(int argc, char **argv)
{
    t_stack *a;
    t_stack *b;
    t_move *moves;
    char *one_move;

    if (argc <= 1)
        return (1);
    if (argc > 1)
    {
        a = ft_filling_a(argc, argv);
        if (!a || ft_check_if_dup(a))
        {
            (ft_free(&a), ft_error());
        }
        b = NULL;
        moves = NULL;
        one_move = get_next_line(0, 0);
        while (one_move)
        {
            if (!one_move)
                break;
            if (!check_move(one_move))  
            {
                get_next_line(0, 1);
                if (moves != NULL)
                    ft_clear_move(&moves);
                ft_free(&a);
                free(one_move);
                ft_error();
            }
            ft_lst_add_back_move(&moves, ft_new_stack_moves(one_move));
            free(one_move);
            one_move  = get_next_line(0, 0);
        }
        
        ft_do_the_moves(&a, &b, &moves);
        if (!ft_check_sort(&a, &b))
        {
            ft_free(&b); // Free the second stack
            ft_clear_move(&moves); // Free the moves list
            ft_free_and_exit(&a, "OK\n");
        }
        else
        {
            ft_free(&b);
            ft_clear_move(&moves);
            ft_free_and_exit(&a, "KO\n");
        }
        return (0); 
    }
}
