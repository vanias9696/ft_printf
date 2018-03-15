/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_n_and_s.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismus <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/06 18:27:35 by ismus             #+#    #+#             */
/*   Updated: 2018/03/06 18:27:36 by ismus            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static char	*less_0(char *s, const char *str, int n, char c)
{
	int i;
	int t;

	t = 0;
	i = ft_strlen(str);
	while (str[t])
	{
		s[t] = str[t];
		t++;
	}
	while (t - i < n)
	{
		s[t] = c;
		t++;
	}
	s[t] = '\0';
	return (s);
}

char		*ft_n_and_s(char c, int n, char const *str, int i)
{
	char	*s;
	int		t;

	t = 0;
	if (!(s = (char *)malloc(n + 1 + ft_strlen(str))))
		return (0);
	if (i > 0)
	{
		while (t < n)
		{
			s[t] = c;
			t++;
		}
		while ((unsigned long)t < ft_strlen(str) + n + 1)
		{
			s[t] = str[t - n];
			t++;
		}
		s[t] = '\0';
	}
	else
		s = less_0(s, str, n, c);
	return (s);
}
