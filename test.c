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


	ft_printf("|%01.*#8d|my\n", 7, 25);
	printf("|%01.*#8d|my\n", -5, 25);
	printf("|%08.*d|\n", -200000000, -25);
	//printf("%i 1\n", printf("{%*c}\n", -15, 0));
	//printf("%i 2\n", ft_printf("{%*c}\n", -15, 0));
	//printf("%i 3\n", printf("{%-15c}\n", 0));
	//printf("%i 4\n", ft_printf("{%-15c}\n", 0));
	return (0);
}
