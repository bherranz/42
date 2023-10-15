/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bherranz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 12:15:57 by bherranz          #+#    #+#             */
/*   Updated: 2023/09/18 12:15:59 by bherranz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// Same as ft_memcpy but it manages overlapping
void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*d;
	const unsigned char	*s;

	d = dst;
	s = src;
	if ((!d && !s) || len == 0)
		return (dst);
	// if there is overlapping it will copy backwards
	if (d > s && d < s + len)
	{
		d += len -1;
		s += len -1;
		while (len > 0)
		{
			*d-- = *s--;
			len--;
		}
	}
	else
	{
		while (len-- > 0)
			*d++ = *s++;
	}
	return (dst);
}

/*int	main(void)
{
	char	source[] = "Hey guys!";
	char	destination[20];
	char	source2[] = "Hey guys!";
	char	destination2[20];

	printf("Without overlapping:\n");
	ft_memmove(destination, source, strlen(source) + 1);
	printf("destination: %s\n\n", destination);

	printf("With overlapping:\n");
	ft_memmove(destination + 5, destination, strlen(destination) + 1);
	printf("destination: %s\n", destination);

	printf("Without overlapping:\n");
	memmove(destination2, source2, strlen(source2) + 1);
	printf("destination: %s\n\n", destination2);

	printf("With overlapping:\n");
	memmove(destination2 + 5, destination2, strlen(destination2) + 1);
	printf("destination: %s\n", destination2);
}*/
