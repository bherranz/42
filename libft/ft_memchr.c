/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bherranz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 17:36:23 by bherranz          #+#    #+#             */
/*   Updated: 2023/09/23 17:36:25 by bherranz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// returns a pointer to the first occurrence of the int c in the memory block
// not necessarily a string; in the first n bytes
void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char		uc;
	unsigned const char	*us;

	uc = (unsigned char)c;
	us = (const unsigned char *)s;
	while (n > 0)
	{
		if (uc == *us)
			return ((void *)us);
		us++;
		n--;
	}
	return (NULL);
}

/*int	main(void)
{
	printf("Original: %s\n", (char *)memchr("teste", 'e', 3));
	printf("My function: %s", (char *)ft_memchr("teste", 'e', 3));
	return (0);
}*/
