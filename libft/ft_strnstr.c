/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarslan <42istanbul.com.tr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 19:34:00 by rarslan           #+#    #+#             */
/*   Updated: 2022/04/13 19:11:48 by rarslan          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	l;

	i = 0;
	if (!*needle)
		return ((char *)haystack);
	while (haystack[i] && i < len)
	{
		l = 0;
		while (haystack[i + l] && haystack[i + l] == needle[l] && i + l < len)
			l++;
		if (!needle[l])
			return ((char *)haystack + i);
		i++;
	}
	return (NULL);
}
