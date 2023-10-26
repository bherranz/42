/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bherranz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 12:51:31 by bherranz          #+#    #+#             */
/*   Updated: 2023/10/24 12:51:34 by bherranz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>
# include "libft.h"

int	ft_printf(char const *str, ...);
int	ft_flags(char const *str, va_list args);
int	ft_character(int c);
int	ft_string(const char *str);
int	ft_integer(int num, int i);

#endif
