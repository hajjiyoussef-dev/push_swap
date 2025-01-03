/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhajji <yhajji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/03 19:49:56 by yhajji            #+#    #+#             */
/*   Updated: 2025/01/03 20:48:51 by yhajji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


int ft_is_space(char **argv)
{
    int i;
    int is_space;

    i = 0;
    is_space = 0;
    while (argv[i])
    {
        if (argv[i][0] == ' ' || argv[i][0] == '\t')
            is_space++;
        i++;
    }
    if (i == is_space)
        return(0);
    return (0);
}

int ft_argv_empty(char **argv)
{
    int i;

    i = 0;
    while (argv[i])
    {
        if (!argv[i][0])
            return (0);
        if (!ft_is_space(argv[i]))
            return (0);
        i++;
    }
    return (1);
}

t_stack ft_filling_a(int argc, char **argv)
{
    t_stack *a;
    char *s;
    char **str;
    

    if (!ft_argv_empty(argv))
        ft_error();
    a = NULL;
    s = ft_strjoin(argc - 1, argv + 1, " "); // joine all the argemment withe space between theme !!
    if (!s)
        ft_error();
    str = ft_split(s, ' '); /// splite all the agremment withe the sepa space ??
    
    if (!str)
        (free(s), ft_error());
    
        
    
    
    
    
        
}