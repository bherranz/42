/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memset.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bherranz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 14:59:53 by bherranz          #+#    #+#             */
/*   Updated: 2023/09/16 14:59:56 by bherranz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// Fills the first len bytes of the memory area pointed to by b with the constant int c.
void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*bp;
	size_t			count;

	// Cast the pointer 'b' to an 'unsigned char' pointer to allow data access.
	bp = (unsigned char *)b;
	count = 0;
	while (len > count)
	{
		*bp = (unsigned char)c;
		bp++;
		count++;
	}
	return (b);
}

/*int	main(void)
{
	char	str[] = "heyy";
	char	str2[] = "heyy";

	memset(str, 'A', 2);
	printf("Original function: %s\n", str);
	ft_memset(str2, 'A', 2);
	printf("My function: %s\n", str2);
	return (0);
}*/
