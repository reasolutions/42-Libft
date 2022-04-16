/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarslan <42istanbul.com.tr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 18:32:01 by rarslan           #+#    #+#             */
/*   Updated: 2022/01/18 18:47:42 by rarslan          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	k;

	i = 0;
	k = (char)c;
	while (s[i] != '\0')
	{
		i++;
	}
	while (s[i] != k && i > 0)
	{
		i--;
	}
	if (s[i] == k)
		return ((char *)s + i);
	return (NULL);
}
