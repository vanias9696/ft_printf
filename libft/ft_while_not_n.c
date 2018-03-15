/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_while_not_n.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismus <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/21 17:38:47 by ismus             #+#    #+#             */
/*   Updated: 2017/12/21 17:38:48 by ismus            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_while_not_n(char *str, char n)
{
	int	i;

	i = 0;
	while (str[i] != n && str[i])
		i++;
	if (!(str[i]))
		return (-1);
	return (i);
}