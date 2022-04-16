/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarslan <42istanbul.com.tr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 14:51:01 by rarslan           #+#    #+#             */
/*   Updated: 2022/04/13 17:33:35 by rarslan          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t		i;
	char		*ml;

	if (!s)
		return (NULL);
	ml = malloc((ft_strlen(s) + 1) * sizeof(char));
	if (!ml)
		return (NULL);
	i = 0;
	while (s[i] != 0)
	{
		ml[i] = f(i, s[i]);
		i++;
	}
	ml[i] = '\0';
	return (ml);
}
/*
char	f(unsigned int i, char a)
{
	return (a + 1);
}

#include <string.h>
#include <stdlib.h>
#include <stdio.h>
int main()
{
    char *s;
    s = strdup("ruya");
    
    printf("%s", ft_strmapi(s, f));
}*/
