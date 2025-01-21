/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhajji <yhajji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 05:59:55 by yhajji            #+#    #+#             */
/*   Updated: 2025/01/20 12:28:10 by yhajji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_stack
{
	int				nbr;
	int				index;
	int				moves;
	struct s_stack	*next;
}					t_stack;

// parsing
t_stack				*ft_filling_a(int argc, char **argv);
int					ft_argv_empty(char **argv);
int					ft_is_space(char *argv);
char				*ft_strjoin(int size, char **strs, char *sep);
void				ft_error(void);
void				ft_free_tab(char **tab);
// void ft_error(char *str);
char				**ft_split(char const *s, char c);
int					ft_atoi(const char *str, t_stack **a, char **allstr);

// lists
void				ft_free(t_stack **lst);
t_stack				*ft_new_stack(int content);
t_stack				*ft_lst_last(t_stack *lst);
void				ft_lst_add_back(t_stack **stack, t_stack *new_stack);
int					ft_check_if_dup(t_stack *a);

// the index
void				ft_give_the_stack_index(t_stack **stack);

// push_swap_help.c
size_t				ft_size(t_stack *a);
int					ft_ale_sorted(t_stack *a);
void				ft_divide_stack(t_stack **a, t_stack **b);

// swap operiton
void				ft_sa(t_stack **a, int _write_it);

// push to a or b
void				ft_pa(t_stack **a, t_stack **b, int _write_it);
void				ft_pb(t_stack **a, t_stack **b, int _write_it);

// rotate
// void ft_rotate(t_stack **stack);
void				ft_ra(t_stack **a, int _write_it);
void				ft_rb(t_stack **b, int _write_it);
void				ft_rr(t_stack **a, t_stack **b, int _write_it);

// reverse_rotate
void				ft_rra(t_stack **a, int _write_it);
void				ft_rrb(t_stack **b, int _write_it);
void				ft_rrr(t_stack **a, t_stack **b, int _write_it);

// sort_three
void				ft_sort_three(t_stack **a);

// sort_five
void				ft_sort_five(t_stack **a, t_stack **b, size_t size_a);

// beging of the sort
void				ft_big_sort(t_stack **a, t_stack **b, size_t size_a);

// big sort help function
t_stack				*min_nbr(t_stack *a);
t_stack				*max_nbr(t_stack *a);
t_stack				*ft_best_elem(t_stack *s);
int					get_max(int a, int b);

// index moves
int					get_moves(t_stack *a, t_stack *b, t_stack *help,
						t_stack *top);
t_stack				*get_top(t_stack *a, t_stack *help);

// move type
void				two_up(t_stack **a, t_stack **b, t_stack *top,
						t_stack *best);
void				two_down(t_stack **a, t_stack **b, t_stack *top,
						t_stack *best);
void				up_down(t_stack **a, t_stack **b, t_stack *top,
						t_stack *best);
void				down_up(t_stack **a, t_stack **b, t_stack *top,
						t_stack *best);

void				ft_final_sort(t_stack **a, t_stack *min_nbr, size_t pos,
						size_t size_a);
int					ft_check_min_position(t_stack *a, int min_nbr);

#endif