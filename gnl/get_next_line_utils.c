/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bherranz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 12:47:01 by bherranz          #+#    #+#             */
/*   Updated: 2023/11/21 12:47:09 by bherranz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*ip;
	size_t			total;
	int				i;

	total = count * size;
	ip = malloc (total);
	if (!ip)
		return (NULL);
	i = 0;
	while (total > 0)
	{
		ip[i] = '\0';
		i++;
		total--;
	}
	return (ip);
}

char	*ft_strdup(const char *s)
{
	char	*new;
	int		i;

	i = 0;
	while (s[i])
		i++;
	new = malloc (i + 1);
	if (!new)
		return (NULL);
	while (i >= 0)
	{
		new[i] = s[i];
		i--;
	}
	return (new);
}