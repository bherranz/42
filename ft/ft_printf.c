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

int	ft_flags(char const *str, va_list args)
{
	int	count;

	count = 0;
	if (*str == 'c')
		ft_character(va_arg(args, int));
	return (count);
}

int	ft_printf(char const *str, ...)
{
	va_list	args;
	int		count;

	count = 0;
	va_start(args, str);
	while (*str)
	{
		if (*str != '%')
			write(1, str, 1);
		else
		{
			count = count + ft_flags(str, args);
			if (ft_flags(str, args) != 0)
				str++;
		}
		str++;
	}
	return (count);
}
