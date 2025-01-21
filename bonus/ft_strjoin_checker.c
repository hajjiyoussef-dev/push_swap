/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin_checker.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhajji <yhajji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 06:14:13 by yhajji            #+#    #+#             */
/*   Updated: 2025/01/20 16:12:01 by yhajji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

int	ft_strlen_strjoin(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strcat(char *dest, char *str)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (str[j] != '\0')
	{
		dest[i] = str[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*mallocat_it(int size, char **strs, char *sep)
{
	int		len;
	int		i;
	char	*join;

	i = 0;
	len = 0;
	while (i < size)
	{
		len = len + ft_strlen_strjoin(strs[i]);
		if (i < size + 1)
			len = len + ft_strlen_strjoin(sep);
		i++;
	}
	join = malloc(len + 1);
	if (join == NULL)
		return (free(join), NULL);
	join[0] = '\0';
	return (join);
}

char	*ft_strjoin_checker(int size, char **strs, char *sep)
{
	int		j;
	char	*join;
	char	*strkhawya;

	j = 0;
	if (size <= 0)
	{
		strkhawya = malloc(1);
		strkhawya[0] = '\0';
		return (0);
	}
	join = mallocat_it(size, strs, sep);
	while (j < size)
	{
		ft_strcat(join, strs[j]);
		if (j < size - 1)
			ft_strcat(join, sep);
		j++;
	}
	return (join);
}
