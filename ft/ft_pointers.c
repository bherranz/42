/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pointers.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bherranz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 11:02:53 by bherranz          #+#    #+#             */
/*   Updated: 2023/10/25 11:03:01 by bherranz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_character(int c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_string(const char *str)
{
	int			i;

	while (*str)
	{
		write(1, &str[i], 1);
		i++;
	}
	return (0);
}
