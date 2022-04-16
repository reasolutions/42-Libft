/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarslan <42istanbul.com.tr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 14:50:10 by rarslan           #+#    #+#             */
/*   Updated: 2022/04/10 15:51:56 by rarslan          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_len(long nbr)
{
	int	i;

	i = 1;
	if (nbr < 0)
	{
		i++;
		nbr = nbr * -1;
	}
	while (nbr > 9)
	{
		nbr = nbr / 10;
		i++;
	}
	return (i);
}

static int	ft_div(int len)
{
	int	i;

	i = 1;
	if (len == 1)
		return (1);
	while (len > 1)
	{
		i *= 10;
		len--;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char		*res;
	int			i;
	int			len;
	int			len2;
	long int	n2;

	i = 0;
	n2 = n;
	len = ft_len(n2);
	len2 = ft_len(n2);
	res = (char *)malloc(sizeof(char) * (len + 1));
	if (!res)
		return (0);
	if (n2 < 0)
	{
		n2 *= -1;
		res[0] = '-';
		i++;
		len--;
	}
	while (i < len2)
		res[i++] = (((n2 / (ft_div(len--)) % 10) + 48));
	res[i] = '\0';
	return (res);
}
/*
#include <stdio.h>
int main()
{
    int    a = -2435;
    printf("%s", ft_itoa(a));
}*/
