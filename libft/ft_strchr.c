/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarslan <42istanbul.com.tr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 18:12:28 by rarslan           #+#    #+#             */
/*   Updated: 2022/01/18 18:31:11 by rarslan          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	k;

	k = (char)c;
	i = 0;
	while (s[i] != k && s[i] != '\0')
		i++;
	if (s[i] == k)
		return ((char *)s + i);
	return (NULL);
}
