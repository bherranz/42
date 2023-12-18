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

	new_line(buffer, fd);
	return (NULL);
}

char	*new_line(char *buffer, int fd)
{
	int		num_read;
	char	*line;

	num_read = read(fd, buffer, BUFFER_SIZE);
	if (num_read > 0)
	{
		while (*buffer && *buffer != '\n')
			buffer++;
	}
	return (NULL);
}
