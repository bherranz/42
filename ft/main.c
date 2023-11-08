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
#if 1

int	main(void)
{
	int	len;
	int	plen;

	//to print characters
	ft_printf("Test print characters:\n");
	len = ft_printf("My print: %c\n", 'a');
	printf("length: %i\n", len);
	plen = printf("Original: %c\n", 'a');
	printf("length2: %i\n\n\n", plen);

	//to print %
	ft_printf("Test print %%:\n");
	len = ft_printf("My print: %%\n");
	printf("length: %i\n", len);
	plen = printf("Original: %%\n");
	printf("length: %i\n\n\n", plen);

	//to print strings
	ft_printf("Test print strings:\n");
	len = ft_printf("My print: %s\n", "I love cats");
	printf("length: %i\n", len);
	plen = printf("Original: %s\n", "I love cats");
	printf("length: %i\n\n", plen);

	//to print integers
	ft_printf("Test print integers:\n");
	len = ft_printf("My print: %i\n", 15);
	printf("length: %i\n", len);
	plen = printf("Original: %i\n", 15);
	printf("length: %i\n\n", plen);
	return (0);
}
#endif
