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
	int	fd;

	fd = open("archivo.txt", O_RDONLY);
	printf("%s", get_next_line(fd));
	atexit(leaks);
	close(fd);

	return (0);
}

#endif
