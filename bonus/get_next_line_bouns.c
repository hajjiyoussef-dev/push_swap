/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bouns.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhajji <yhajji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 06:06:37 by yhajji            #+#    #+#             */
/*   Updated: 2025/01/21 13:32:41 by yhajji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

static char	*the_next_line(char *res)
{
	int		i;
	char	*next_res;

	i = 0;
	if (!res)
		return (NULL);
	while (res[i] && res[i] != '\n')
		i++;
	if (res[i] == '\0')
		return (free(res), NULL);
	next_res = ft_strdup((res + i + 1));
	if (!next_res)
		return (free(res), NULL);
	free(res);
	return (next_res);
}

static char	*extract_line(char *res)
{
	int		i;
	int		new_line;
	char	*line;

	i = 0;
	new_line = 0;
	if (!res || res[0] == '\0')
		return (NULL);
	while (res[i] && res[i] != '\n')
		i++;
	if (res[i] == '\n')
		new_line = 1;
	line = malloc((i + new_line + 1) * sizeof(char));
	if (!line)
		return (NULL);
	ft_memcpy(line, res, (i + new_line));
	line[i + new_line] = '\0';
	return (line);
}

static char	*read_end_find(int fd, char *buff, char *res)
{
	ssize_t	read_byats;

	while (1)
	{
		read_byats = read(fd, buff, BUFFER_SIZE);
		if (read_byats <= 0)
			break ;
		buff[read_byats] = '\0';
		res = ft_strjoin(res, buff);
		if (!res)
			return (NULL);
	}
	return (res);
}

char	*get_next_line(int fd, int cleanup)
{
	static char	*res;
	char		*buff;
	char		*line;

	if (cleanup)
	{
		if (res)
			free(res);
		return (res = NULL, NULL);
	}
	if (BUFFER_SIZE <= 0 || BUFFER_SIZE > INT_MAX || read(fd, 0, 0) < 0)
		return (free(res), res = NULL);
	buff = malloc(((size_t)BUFFER_SIZE + 1) * sizeof(char));
	if (!buff)
		return (free(res), NULL);
	res = read_end_find(fd, buff, res);
	free(buff);
	if (!res)
		return (NULL);
	line = extract_line(res);
	res = the_next_line(res);
	return (line);
}
