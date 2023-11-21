/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bherranz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 13:19:16 by bherranz          #+#    #+#             */
/*   Updated: 2023/11/14 16:57:44 by bherranz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>
#if 0

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
	len = ft_printf("My print: %s\n", (char *) NULL);
	printf("length: %i\n", len);
	plen = printf("Original: %s\n", "I love cats");
	printf("length: %i\n\n", plen);

	//to print integers
	ft_printf("Test print integers:\n");
	len = ft_printf("My print: %i\n", -15321);
	printf("length: %i\n", len);
	plen = printf("Original: %i\n", -15321);
	printf("length: %i\n\n", plen);

	//to print integers with 'd' flag
	ft_printf("Test print integers:\n");
	len = ft_printf("My print: %d\n", -15321);
	printf("length: %i\n", len);
	plen = printf("Original: %d\n", -15321);
	printf("length: %i\n\n", plen);

	//to print integers with 'u' flag
	ft_printf("Test print unsigned integers:\n");
	len = ft_printf("My print: %u\n", -1);
	printf("length: %i\n", len);
	plen = printf("Original: %u\n", -1);
	printf("length: %i\n\n", plen);

	//to print hexadecimals lowercase
	ft_printf("Test print unsigned integers:\n");
	len = ft_printf("My print: %x\n", 30);
	printf("length: %i\n", len);
	plen = printf("Original: %x\n", 30);
	printf("length: %i\n\n", plen);

	//to print hexadecimals uppercase
	ft_printf("Test print unsigned integers:\n");
	len = ft_printf("My print: %X\n", 30);
	printf("length: %i\n", len);
	plen = printf("Original: %X\n", 30);
	printf("length: %i\n\n", plen);

	//to print pointers
	ft_printf("Test print unsigned integers:\n");
	len = ft_printf("My print: %p\n", (void *)&len);
	printf("length: %i\n", len);
	plen = printf("Original: %p\n", (void *)&len);
	printf("length: %i\n\n", plen);

	//random
	ft_printf("Test random:\n");
	ft_printf("My print: ");
	len = ft_printf("\001\002\007\v\010\f\r\n");
	ft_printf("length: %i\n", len);
	ft_printf("Original: ");
	plen = printf("\001\002\007\v\010\f\r\n");
	printf("length: %i\n\n", plen);

	ft_printf("%p, %x", (void *)2, -114341);
	return (0);
}
#endif
