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
	char	*buffer;
	int		count_r;

	buffer = (char *)malloc(BUFFER_SIZE);
	count_r = read(fd, buffer, sizeof(buffer));
	if (count_r > 0)
	{
		get_next_line(fd);
		return (buffer);
	}
	free(buffer);
	return (NULL);
}
