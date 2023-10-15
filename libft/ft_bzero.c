/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bherranz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 19:33:01 by bherranz          #+#    #+#             */
/*   Updated: 2023/09/16 19:33:04 by bherranz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// It sets the first n bytes of the memory area pointed to by s to 0 
void	ft_bzero(void *s, size_t n)
{
	unsigned char	*p;
	size_t			count;

	p = (unsigned char *)s;
	count = 0;
	while (count < n)
	{
		*p = 0;
		p++;
		count++;
	}
}

/*int	main(void)
{
	char	str[] = "heyy";
	char	str2[] = "heyy";

	bzero(str, 2);
	printf("Original function: %s\n", str);
	ft_bzero(str2, 2);
	printf("My function: %s\n", str2);
	if (ft_strncmp(str, str2, ft_strlen(str)) == 0)
		printf("Same result\n");
	return (0);
}*/
