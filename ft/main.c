/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bherranz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 13:19:16 by bherranz          #+#    #+#             */
/*   Updated: 2023/10/24 13:19:19 by bherranz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include <stdio.h>

int	main(void)
{
	int	len;
	int	plen;

	len = ft_printf("First try: %y", 'a');
	printf("\nlen: %i\n", len);
	plen = printf("First try: %y", 'a');
	printf("\nlen: %i", plen);
	return (0);
}
