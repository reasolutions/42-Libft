/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarslan <42istanbul.com.tr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 19:13:29 by rarslan           #+#    #+#             */
/*   Updated: 2022/04/10 17:59:37 by rarslan          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	k;
	unsigned char	*l;

	i = 0;
	k = (unsigned char)c;
	l = (unsigned char *)s;
	while (l[i] != k && i < n - 1)
	{
		i++;
	}
	if (l[i] == k && n)
		return (&l[i]);
	return (NULL);
}

/*
#include <stdio.h>
int main()
{
    char *s;
    s = "endoplazmikretikulum";
    printf("%s", ft_memchr(s, 'r', 20));
}*/
