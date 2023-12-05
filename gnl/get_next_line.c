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

#ifndef BUFFER_SIZE
# define BUFFER_SIZE 4096
#endif

char	*get_next_line(int fd)
{
	static char	*buffer;
	int			count_r;
	int			len_line;

	if (fd == -1)
		return ("(null)");
	buffer = (char *)malloc(BUFFER_SIZE + 1);
	while (*buffer != '\n')
		len_line++;
	
	count_r = read(fd, buffer, BUFFER_SIZE);
	if (count_r > 0)
	{
		get_next_line(fd);
		return (line);
	}
	free(buffer);
	return (NULL);
}
