/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   type_c.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismus <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/14 17:43:48 by ismus             #+#    #+#             */
/*   Updated: 2018/03/14 17:43:49 by ismus            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	modif_c0(t_plist *par)
{
	if (par->wide > 1)
	{
		if (ft_while_not_n(par->flag, '-') >= 0)
			ft_putstr(ft_by_n(par->wide - 1, ' '));
		else if (ft_while_not_n(par->flag, '0') >= 0)
			ft_putstr(ft_by_n(par->wide - 1, '0'));
		else
			ft_putstr(ft_by_n(par->wide - 1, ' '));
		ft_putchar('\0');
		return (par->wide);
	}
	ft_putchar('\0');
	return (1);
}

int			modif_c(t_plist *par, va_list arg)
{
	char	*s;
	int		c;

	c = va_arg(arg, int);
	if (c == 0)
		return (modif_c0(par));
	if (par->wide > 1)
	{
		s = (char *)malloc(par->wide + 1);
		if (ft_while_not_n(par->flag, '-') >= 0)
			s = ft_strcjoin(ft_by_n(par->wide - 1, ' '), c, -1);
		else if (ft_while_not_n(par->flag, '0') >= 0)
			s = ft_strcjoin(ft_by_n(par->wide - 1, '0'), c, 1);
		else
			s = ft_strcjoin(ft_by_n(par->wide - 1, ' '), c, 1);
		s[par->wide] = '\0';
		ft_putstr(s);
		c = ft_strlen(s);
		return (c);
	}
	ft_putchar(c);
	return (1);
}
