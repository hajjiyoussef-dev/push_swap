/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhajji <yhajji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/03 20:41:41 by yhajji            #+#    #+#             */
/*   Updated: 2025/01/03 20:41:58 by yhajji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	help_free(char **string, int i)
{
	while (i > 0)
	{
		free(string[i]);
		i--;
	}
	free(string);
}

static int	count_word(const char *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c)
			i++;
		if (s[i] && s[i] != c)
			count++;
		while (s[i] != c && s[i])
			i++;
	}
	return (count);
}

static char	*ft_str_dup(const char *s1, int size)
{
	char	*ptr;
	int		i;

	i = 0;
	ptr = (char *) malloc((size + 1) * sizeof(char));
	if (!ptr)
		return (NULL);
	while (s1[i] && i < size)
	{
		ptr[i] = s1[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}

static char	**help_split(const char *s, char c, char **string)
{
	int	i;
	int	len;

	i = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		len = 0;
		while (s[len] && s[len] != c)
			len++;
		if (len > 0)
		{
			string[i] = ft_str_dup(s, len);
			if (string[i] == NULL)
			{
				help_free(string, i);
				return (NULL);
			}
			i++;
		}
		s += len;
	}
	string[i] = NULL;
	return (string);
}

char	**ft_split(char const *s, char c)
{
	char	**string;

	if (!s)
		return (NULL);
	string = (char **) malloc((count_word(s, c) + 1) * sizeof(char *));
	if (!string)
		return (NULL);
	return (help_split(s, c, string));
}