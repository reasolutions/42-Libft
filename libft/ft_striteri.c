/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarslan <42istanbul.com.tr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 14:51:11 by rarslan           #+#    #+#             */
/*   Updated: 2022/04/10 15:36:47 by rarslan          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	if (s != NULL)
	{
		while (s[i] != 0)
		{
			f(i, &s[i]);
			i++;
		}
	}
}

/* void ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	i;

	if (!s)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

void f(unsigned int i, char* a)
{
	*a = 'x';
}

#include <string.h>
#include <stdlib.h>
#include <stdio.h>
int main()
{
    char *s;
    s = strdup("ruya");
   ft_striteri(s, f); 
    printf("%s", s);
}
*/
