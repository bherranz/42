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
		count = ft_character(va_arg(args, int));
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
		{
			write(1, str, 1);
			count++;
		}
		else if (ft_strchr("cspdiuxX", *(str + 1)))
		{
			str++;
			count = count + ft_flags(str, args);
		}
		str++;
	}
	va_end(args);
	return (count);
}
