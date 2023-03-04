/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcologgi <dcologgi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 15:44:20 by dcologgi          #+#    #+#             */
/*   Updated: 2023/03/04 15:57:00 by dcologgi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int	ft_putchar(int c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	return (i);
}

int	lenght(int nb, int base)
{
	int	i;

	i = 0;
	if (nb <= 0)
		++i;
	while (nb && ++i)
		nb /= base;
	return (i);
}

int	hexlen(unsigned int nb)
{
	int	i;

	i = 0;
	if (nb == 0)
		return (0);
	while (nb != 0)
	{
		i++;
		nb /= 16;
	}
	return (i);
}
