/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_copy_unt.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismus <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/07 19:49:13 by ismus             #+#    #+#             */
/*   Updated: 2017/12/07 19:49:14 by ismus            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_copy_unt(char *str1, char *str2, char c)
{
	int i;

	i = 0;
	while (str2[i] && str2[i] != c)
	{
		str1[i] = str2[i];
		i++;
	}
	str1[i] = '\0';
	return (i);
}