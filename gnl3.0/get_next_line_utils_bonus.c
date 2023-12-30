/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bherranz <bherranz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 12:47:01 by bherranz          #+#    #+#             */
/*   Updated: 2023/12/30 16:52:06 by bherranz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

size_t	ft_strlen(const char *s)
{
	size_t	count;

	count = 0;
	if (!s)
		return (0);
	while (s[count])
	{
		count++;
	}
	return (count);
}

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*ip;
	size_t			total;
	int				i;

	total = count * size;
	ip = malloc (total);
	if (!ip)
		return (NULL);
	i = 0;
	while (total > 0)
	{
		ip[i] = '\0';
		i++;
		total--;
	}
	return (ip);
}

char	*ft_strchr(const char *s, int c)
{
	unsigned char	uc;

	uc = (unsigned char)c;
	if (!s)
		return (NULL);
	while (*s)
	{
		if (uc == *s)
			return ((char *)s);
		s++;
	}
	if (uc == *s)
		return ((char *)s);
	return (NULL);
}

char	*ft_strjoin(char *s1, char *s2)
{
	char	*new;
	size_t	i;
	size_t	j;

	if (!s2)
		return (NULL);
	new = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	i = 0;
	if (!new)
		return (NULL);
	if (s1)
	{
		while (s1[i])
		{
			new[i] = s1[i];
			i++;
		}
		free(s1);
	}
	j = 0;
	while (s2[j])
		new[i++] = s2[j++];
	new[i] = '\0';
	return (new);
}

char	*ft_substr(char *s, unsigned int start, size_t len)
{
	char			*sub;
	unsigned int	i;

	if (!s)
		return (NULL);
	i = ft_strlen(s);
	if (start >= i)
	{
		sub = malloc(1);
		if (!sub)
			return (NULL);
		sub[0] = '\0';
		return (sub);
	}
	if (len > i - start)
		len = i - start;
	sub = malloc(len + 1);
	if (!sub)
		return (NULL);
	i = 0;
	while ((len-- > 0) && s[start])
		sub[i++] = s[start++];
	sub[i] = '\0';
	return (sub);
}
