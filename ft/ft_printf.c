/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bherranz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 18:52:07 by bherranz          #+#    #+#             */
/*   Updated: 2023/10/22 18:52:10 by bherranz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_printf(char const *str, ...)
{
	int	i;
	int	

	i = 0;
	while (str[i])
	{
		if (str[i] != '%')
			write(1, &str[i], 1);
		else
		{
			if (str[i + 1] == 'c')
				write(1, &str[i + 1], 1);
			elif (str[i + 1] == 's')
				ft_string(&str[i + 1]);
		}
		i++;
	}
	return (i);
}
