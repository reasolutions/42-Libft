/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarslan <42istanbul.com.tr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 17:24:18 by rarslan           #+#    #+#             */
/*   Updated: 2022/04/13 21:35:36 by rarslan          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	is_seperator(char s, char c)
{
	if (s == c)
		return (1);
	return (0);
}

int	count(char *str, char c)
{
	int	i;
	int	count;

	count = 0;
	i = 0;
	while (str[i])
	{
		while (is_seperator(str[i], c))
			i++;
		if (!is_seperator(str[i], c && str[i]))
			count++;
		while (!is_seperator(str[i], c) && str[i])
			i++;
	}
	return (count);
}

char	*worddup(char *s, char c)
{
	char	*word;
	int		i;

	i = 0;
	while (s[i] && !is_seperator(s[i], c))
			i++;
	word = malloc(sizeof(char) * (i + 1));
	i = 0;
	while (s[i] && !is_seperator(s[i], c))
	{
		word[i] = s[i];
		i++;
	}	
	word [i] = '\0';
	return (word);
}

int	wordlen(char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] && s[i] != c)
	{
		i++;
	}
	return (i);
}

char	**ft_split(char const *s, char c)
{
	char	**yer;
	int		i;
	char	*str;

	str = (char *)s;
	i = 0;
	yer = (char **)malloc(sizeof(char *) * (count(str, c) + 1));
	if (!yer)
		return (NULL);
	while (*str)
	{
		while (*str && is_seperator(*str, c))
			str++;
		if (*str && !is_seperator(*str, c))
		{
			yer[i] = worddup(str, c);
			i++;
			while (*str && !is_seperator(*str, c))
				str++;
		}
	}
	yer[i] = NULL;
	return (yer);
}

/*
#include <stdio.h>
int main()
{
	char const *str;
	char c;
	char **s;


	str = "ey edip adanada pide ye";;
	c = ' ';
	s = ft_split(str, ' ');
	printf("%c", s[4][0]);
}
*/
