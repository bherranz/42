/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bherranz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 11:04:37 by bherranz          #+#    #+#             */
/*   Updated: 2023/09/18 11:04:41 by bherranz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// Copies 'n' bytes from the area pointed to by 'src' to the one pointed to by 'dst'
// Does not manage overlapping
void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;

	d = dst;
	s = src;
	if (!d && !s)
		return (0);
	while (n > 0)
	{
		*d = *s;
		d++;
		s++;
		n--;
	}
	return (dst);
}

/*int	main(void)
{
	char	*source = "aaaa";
	char	destination[6];

	memcpy(destination, source, 2);
	printf("Original function: %s\n", destination);
	ft_memcpy(destination, source, 2);
	printf("My function: %s\n", destination);

	return (0);
}*/
