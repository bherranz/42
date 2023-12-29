/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bherranz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 12:46:25 by bherranz          #+#    #+#             */
/*   Updated: 2023/11/21 12:46:27 by bherranz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*read_buffer(int fd, char *buffer)
{
	int		num_read;
	char	*new;

	new = ft_calloc(BUFFER_SIZE + 1, sizeof(char));
	num_read = 1;
	while (num_read > 0 && !ft_strchr(new, '\n'))
	{
		num_read = read(fd, new, BUFFER_SIZE);
		if (num_read <= 0)
			return (NULL);
		buffer = ft_strjoin(buffer, new);
	}
	return (buffer);
}

char	*new_line(char *buffer)
{
	char	*line;
	int		count;

	count = 0;
	while (buffer[count] && buffer[count] != '\n')
		count++;
	if (buffer[count] == '\n')
		count++;
	line = ft_substr(buffer, 0, count);
	return (line);
}

char	*to_be_continued(char *buffer, char *line)
{
	char	*new;
	int		start;

	start = 0;
	if (!buffer || !line)
		return (NULL);
	while (buffer[start] == line[start] && buffer[start])
		start++;
	new = ft_substr(buffer, start, ft_strlen(buffer));
	if (buffer[start] == '\0')
		return (NULL);
	return (new);
}

char	*get_next_line(int fd)
{
	static char	*buffer;
	char		*line;

	if (fd < 0)
		return (NULL);
	buffer = read_buffer(fd, buffer);
	if (!buffer)
		return (NULL);
	line = new_line(buffer);
	buffer = to_be_continued(buffer, line);
	return (line);
}
