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

char	*read_buffer(char *buffer, int fd)
{
	int	num_read;

	num_read = read(fd, buffer, BUFFER_SIZE);
	if (num_read <= 0) //ha llegado al final del archivo o ha habido un error
	{
		printf("fin");
		free(buffer);
		return (NULL);
	}
	return (buffer);
}

char	*new_line(char *buffer)
{
	int	count;

	count = 0;
	while (*buffer)
	{
		//printf("%s\n", buffer);
		if (*buffer == '\n')
			return (ft_substr(buffer - count, 0, count + 1));
		buffer++;
		count++;
	}
	return (ft_substr(buffer - count, 0, count));
}

char	*update(char *buffer)
{
	if (ft_strchr(buffer, '\n'))
		buffer = ft_strchr(buffer, '\n') + 1;
	else
		buffer = NULL;
	return (buffer);
}

char	*get_next_line(int fd)
{
	static char	*buffer;
	char		*line;

	//printf("\n%s", buffer);
	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	if (!buffer)
	{// igual es mejor que meta la siguiente línea en la función read
		buffer = ft_calloc((BUFFER_SIZE + 1), sizeof(char));
		if (!buffer)
			return (NULL);
		buffer = read_buffer(buffer, fd);
	}
	line = new_line(buffer);
	//printf("\nlll: %s", line);
	buffer = update(buffer);
	//printf("\n%s", buffer);
	if (line)
		return (line);
	return (NULL);
}
