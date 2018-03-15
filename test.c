/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismus <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/27 18:46:21 by ismus             #+#    #+#             */
/*   Updated: 2018/01/27 18:46:21 by ismus            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include "libft/libft.h"
#include "ft_printf.h"
#include <locale.h>
#include <limits.h>
#include <stdio.h>
#include <stdint.h>
#include <locale.h>
#include <stddef.h>
#include <fenv.h>
#include <limits.h>

int	main(void)
{
	setlocale(LC_ALL, "");

	printf("%i 1\n", printf("%4.15d\n", 424242));
	printf("%i 1\n", ft_printf("%4.15dmy\n", 424242));
	return (0);
}
