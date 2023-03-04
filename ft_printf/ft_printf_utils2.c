/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcologgi <dcologgi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 15:57:16 by dcologgi          #+#    #+#             */
/*   Updated: 2023/03/04 16:07:45 by dcologgi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		ft_putnbr(147483648);
	}
	if (nb < 0)
	{
		ft_putchar('-');
		ft_putnbr(-nb);
	}
	else
	{
		if (nb > 9)
			ft_putnbr(nb / 10);
		ft_putchar((nb % 10) + '0');
	}
	return (lenght(nb, 10));
}

void	ft_printhex(unsigned int nb)
{
	if (nb >= 16)
	{
		ft_printhex(nb / 16);
		ft_printhex(nb % 16);
	}
	else
	{
		if (nb <= 9)
			ft_putchar(nb + '0');
		else
			ft_putchar(nb - 10 + 'a');
	}
}

int	ft_puthexnbr(unsigned int nb)
{
	if (nb == 0)
		return (ft_putchar('0'));
	else
		ft_printhex(nb);
	return (hexlen(nb));
}
