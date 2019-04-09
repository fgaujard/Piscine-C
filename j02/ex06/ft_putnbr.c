/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgaujard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/02 13:08:45 by fgaujard          #+#    #+#             */
/*   Updated: 2018/09/03 19:24:22 by fgaujard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	toobig(int nb)
{
	if (nb == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		ft_putchar('1');
		ft_putchar('4');
		ft_putchar('7');
		ft_putchar('4');
		ft_putchar('8');
		ft_putchar('3');
		ft_putchar('6');
		ft_putchar('4');
		ft_putchar('8');
	}
}

void	ft_putnbr(int nb)
{
	int i;

	i = 1000000000;
	if ((-2147483648 < nb) && (nb < 0))
	{
		ft_putchar('-');
		nb = nb * (-1);
	}
	if ((0 <= nb) && (nb <= 2147483647))
	{
		while (i > nb)
		{
			i = i / 10;
		}
		while (i > 1)
		{
			ft_putchar((nb / i) + '0');
			nb = nb % i;
			i = i / 10;
		}
		ft_putchar(nb + '0');
	}
	toobig(nb);
}
