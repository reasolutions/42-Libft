/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarslan <42istanbul.com.tr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 17:00:10 by rarslan           #+#    #+#             */
/*   Updated: 2022/04/13 17:29:10 by rarslan          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len;
	char	*yer;
	size_t	i;
	size_t	j;

	if (!s1 && !s2)
		return (0);
	i = 0;
	j = 0;
	len = (ft_strlen(s1) + ft_strlen(s2));
	yer = malloc(sizeof(char) * (len + 1));
	if (!yer)
		return (NULL);
	while (s1[i])
	{
		yer[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		yer[i++] = s2[j++];
	}
	yer[i] = 0;
	return (yer);
}
/*
#include <stdio.h>

int main()
{
	char *s1;
	char *s2;
	s1 = "endoplazmik";
	s2 = "retikulum";
	
	printf("%s", ft_strjoin(s1,s2));
}*/
