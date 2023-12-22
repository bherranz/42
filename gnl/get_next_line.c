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

char	*get_next_line(int fd)
{
	static char	*buffer;
	int			count;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	if (!buffer)
	{// igual es mejor que meta la siguiente línea en la función read
		buffer = calloc((BUFFER_SIZE + 1), sizeof(char));
		if (!buffer)
			return (NULL);
		buffer = read_buffer(buffer, fd);
	}
	count = line(buffer);
	if (buffer)
		return (buffer - count);
	return (NULL);
}

char	*read_buffer(char *buffer, int fd)
{
	int	num_read;

	num_read = read(fd, buffer, BUFFER_SIZE);
	if (num_read <= 0) //ha llegado al final del archivo o ha habido un error
		return (NULL);
	return (buffer);
}

int	line(char *buffer)
{
	int	count;

	count = 0;
	while (*buffer)
	{
		if (*buffer == '\n')
			return (count);
		buffer++;
		count++;
	}
	return (count);
}
