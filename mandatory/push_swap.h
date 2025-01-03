#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

#include <unistd.h>
#include <stdlib.h>


typedef struct s_stack
{
    int nbr;
    int index;
    int moves ;
    struct s_stack *next ;
}   t_stack ;


// parsing
t_stack ft_filling_a(int argc, char **argv);
int ft_argv_empty(char **argv);
int ft_is_space(char **argv);
char	*ft_strjoin(int size, char **strs, char *sep);
void ft_error(void);
char	**ft_split(char const *s, char c);
int	ft_atoi(const char *c);
//lists
t_stack ft_free(t_stack **lst);
t_stack *ft_new_stack(int content);
t_stack *ft_lst_last(t_stack *lst);


#endif