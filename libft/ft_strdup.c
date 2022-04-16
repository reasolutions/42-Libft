/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarslan <42istanbul.com.tr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 19:47:51 by rarslan           #+#    #+#             */
/*   Updated: 2022/04/13 17:32:03 by rarslan          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	i;
	char	*yer;

	i = 0;
	yer = malloc(sizeof(char) * (ft_strlen(s1) + 1));
	if (!yer)
		return (NULL);
	while (s1[i])
	{
		yer[i] = s1[i];
		i++;
	}
	yer[i] = 0;
	return (yer);
}
