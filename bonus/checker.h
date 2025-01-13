/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhajji <yhajji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 06:00:51 by yhajji            #+#    #+#             */
/*   Updated: 2025/01/13 06:38:26 by yhajji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_H
#define CHECKER_H

# include <unistd.h>
# include <stdlib.h>
# include <limits.h>


# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

typedef struct s_stack
{
    int nbr;
    int index;
    int moves ;
    struct s_stack *next ;
}   t_stack ;

void ft_error(void);

char	*ft_strjoin(char *s1, char *s2);
char	*ft_strdup(const char *s1);
void	*ft_memcpy(void *dest, const void *src, size_t n);
size_t	ft_strlen(const char *s);
char	*get_next_line(int fd);

char	*ft_strjoin_checker(int size, char **strs, char *sep);
char	**ft_split_checker(char const *s, char c);
t_stack *ft_filling_a(int argc, char **argv);

void ft_free(t_stack **lst);
t_stack *ft_new_stack(int content);
t_stack *ft_lst_last(t_stack *lst);
void ft_lst_add_back(t_stack **stack, t_stack *new_stack);
int ft_check_if_dup(t_stack *a);

#endif