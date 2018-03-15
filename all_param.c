/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   all_param.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismus <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/15 14:43:27 by ismus             #+#    #+#             */
/*   Updated: 2018/03/15 14:43:28 by ismus            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	flag_wide_acc(t_plist *param, char *flag, int k)
{
	if (flag[k] <= '9' && flag[k] >= '0')
	{
		param->wide = ft_atoi(flag + k);
		while (flag[k] <= '9' && flag[k] >= '0')
			k++;
	}
	else if (flag[k] == '.')
	{
		param->if_acc = 1;
		param->accuracy = ft_atoi(++k + flag);
		while (flag[k] <= '9' && flag[k] >= '0')
			k++;
	}
	return (k);
}

int			all_param(char *flag, int k, t_plist *param)
{
	char *free_s;

	if (flag[k] == '-' || flag[k] == '+' || flag[k] == ' '
		|| flag[k] == '#' || flag[k] == '0')
	{
		free_s = param->flag;
		param->flag = ft_strcjoin(param->flag, flag[k++], 1);
		free(free_s);
	}
	else if ((flag[k] <= '9' && flag[k] >= '0') || flag[k] == '.')
		k = flag_wide_acc(param, flag, k);
	else
	{
		free_s = param->spec;
		param->spec = ft_strcjoin(param->spec, flag[k], 1);
		free(free_s);
		k++;
	}
	return (k);
}
