#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>


typedef struct s_stack
{
    int nbr;
    int index;
    int moves ;
    struct s_stack *next ;
}   t_stack ;

// free
// void	ft_free_tab(char **tab);

// parsing
t_stack *ft_filling_a(int argc, char **argv);
int ft_argv_empty(char **argv);
int ft_is_space(char *argv);
char	*ft_strjoin(int size, char **strs, char *sep);
void ft_error(void);
//void ft_error(char *str);
char	**ft_split(char const *s, char c);
int	ft_atoi(const char *str);

//lists
void ft_free(t_stack **lst);
t_stack *ft_new_stack(int content);
t_stack *ft_lst_last(t_stack *lst);
void ft_lst_add_back(t_stack **stack, t_stack *new_stack);
int ft_check_if_dup(t_stack *a);

// the index
void ft_give_the_stack_index(t_stack **stack);

// push_swap_help.c
size_t ft_size(t_stack *a);
int ft_ale_sorted(t_stack *a);
void ft_divide_stack(t_stack **a, t_stack **b);

// test printf the content od the stack 
void print_stack(t_stack *stack, char stack_name);


// swap operiton 
void ft_sa(t_stack **a, int _write_it);

// push to a or b
void ft_pa(t_stack **a , t_stack **b, int _write_it);
void ft_pb(t_stack **a, t_stack **b, int _write_it);


//rotate
//void ft_rotate(t_stack **stack);
void ft_ra(t_stack **a, int _write_it);


// reverse_rotate 
void ft_rra(t_stack **a, int _write_it);


//sort_three
void ft_sort_three(t_stack **a);

//sort_five
void ft_sort_five(t_stack **a, t_stack **b, size_t size_a);


// beging of the sort
void ft_big_sort(t_stack **a, t_stack **b, size_t size_a);

// big sort help function 
t_stack *min_nbr(t_stack *a);
t_stack *max_nbr(t_stack *a);
// index moves
t_stack *get_moves(t_stack *a, t_stack *b, t_stack *help, t_stack *top);
t_stack *get_top(t_stack *a, t_stack *help);



#endif