/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maic.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bherranz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 12:46:43 by bherranz          #+#    #+#             */
/*   Updated: 2023/11/21 12:46:45 by bherranz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>
#include <fcntl.h>

#if 1

void	leaks(void)
{
	system("leaks -q a.out");
}

int	main(void)
{
	int		fd;
	char	*line;

	fd = open("archivo.txt", O_RDONLY);
	// printf("%s", get_next_line(fd));
	// printf("%s", get_next_line(fd));
	// printf("%s", get_next_line(fd));
	// printf("%s", get_next_line(fd));
	// printf("%s", get_next_line(fd));
	// printf("%s", get_next_line(fd));
	while ((line = get_next_line(5)) != NULL)
	{
		printf("%s", line);
		free(line);
	}
	/*while (1)
	{
		line = get_next_line(fd);
		if (line == NULL)
			break ;
	}*/
	atexit(leaks);
	close(fd);
	return (0);
}

#endif
