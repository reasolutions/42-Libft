/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarslan <42istanbul.com.tr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 20:02:40 by rarslan           #+#    #+#             */
/*   Updated: 2022/04/13 21:49:14 by rarslan          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	is_from_set(char s, char const *set)
{
	while (*set)
	{
		if (s == *set)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	start;
	size_t	end;
	char	*yer;

	if (!s1)
		return (NULL);
	start = 0;
	end = ft_strlen(s1);
	while (*s1 && start < end && is_from_set(s1[start], set))
		start++;
	if (start == end)
		return (ft_strdup(""));
	while (end > 0 && is_from_set(s1[end - 1], set))
		end--;
	yer = malloc(sizeof(char) * (end - start + 1));
	if (!yer)
		return (NULL);
	i = 0;
	while (s1 && start < end)
		yer[i++] = s1[start++];
	yer[i] = 0;
	return (yer);
}
/*
#include <stdio.h>
int	main ()
{
	char *s1;
	char *set;

	s1 = "aaaaanemoaaaaaaaaaa";
	set = "a";
	printf("%s", ft_strtrim(s1, set));
	
}*/
