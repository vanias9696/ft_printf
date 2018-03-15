/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   type_s.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismus <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/04 17:32:42 by ismus             #+#    #+#             */
/*   Updated: 2018/03/04 17:32:43 by ismus            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	modif_s0_acc_wide(t_plist *par)
{
	char *free_s;

	if (ft_while_not_n(par->flag, '-') >= 0)
	{
		free_s = ft_by_n(par->wide, ' ');
		ft_putstr(free_s);
	}
	else if (ft_while_not_n(par->flag, '0') >= 0)
	{
		free_s = ft_by_n(par->wide, '0');
		ft_putstr(free_s);
	}
	else
	{
		free_s = ft_by_n(par->wide, ' ');
		ft_putstr(free_s);
	}
	free(free_s);
}

static int	modif_s0_acc(t_plist *par)
{
	char *s;

	if (par->accuracy < 6)
	{
		s = (char *)malloc(par->accuracy + 1);
		s = ft_strncpy(s, "(null)", par->accuracy);
		s[par->accuracy] = '\0';
	}
	if (par->wide > ft_strlen(s))
		modif_s0_acc_wide(par);
	else
	{
		ft_putstr(s);
		free(s);
		return (par->accuracy);
	}
	return (par->wide);
}

static void	modif_s0_print(t_plist *par)
{
	char *free_s;

	if (ft_while_not_n(par->flag, '0') >= 0)
	{
		free_s = ft_by_n(par->wide - 6, '0');
		ft_putstr(free_s);
		free(free_s);
		ft_putstr("(null)");
	}
	else
	{
		free_s = ft_by_n(par->wide - 6, ' ');
		ft_putstr(free_s);
		free(free_s);
		ft_putstr("(null)");
	}
}

int			modif_s0(t_plist *par)
{
	char *free_s;

	if (par->if_acc != 0)
		return (modif_s0_acc(par));
	if (par->wide > 6)
	{
		if (ft_while_not_n(par->flag, '-') >= 0)
		{
			ft_putstr("(null)");
			free_s = ft_by_n(par->wide - 6, ' ');
			ft_putstr(free_s);
			free(free_s);
		}
		else
			modif_s0_print(par);
		return (par->wide);
	}
	ft_putstr("(null)");
	return (6);
}

int			modif_s(t_plist *par, va_list arg)
{
	char	*s;
	char	*st;

	s = va_arg(arg, char *);
	if (s == 0)
		return (modif_s0(par));
	if (par->if_acc == 1 && par->accuracy < (int)ft_strlen(s))
	{
		st = (char *)malloc(par->accuracy + 1);
		s = ft_strncpy(st, s, par->accuracy);
		st[par->accuracy] = '\0';
		s = st;
	}
	if (par->wide > (int)ft_strlen(s))
	{
		if (ft_while_not_n(par->flag, '-') >= 0)
			s = ft_strjoin(s, ft_by_n(par->wide - ft_strlen(s), ' '));
		else if (ft_while_not_n(par->flag, '0') >= 0)
			s = ft_strjoin(ft_by_n(par->wide - ft_strlen(s), '0'), s);
		else
			s = ft_strjoin(ft_by_n(par->wide - ft_strlen(s), ' '), s);
	}
	ft_putstr(s);
	return (ft_strlen(s));
}