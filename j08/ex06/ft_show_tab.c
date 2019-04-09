/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgaujard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/20 14:13:44 by fgaujard          #+#    #+#             */
/*   Updated: 2018/09/20 16:08:39 by fgaujard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_par.h"

void	ft_putstr(char *str)
{
	while (*str)
		ft_putchar(*str++);
}

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

void	ft_show_tab(struct s_stock_par *par)
{
	int i;
	int j;

	i = 0;
	while (par[i].str != '\0')
	{
		ft_putstr(par[i].str);
		ft_putchar('\n');
		ft_putnbr(par[i].size_param);
		ft_putchar('\n');
		j = 0;
		while (par[i].tab[j])
		{
			ft_putstr(par[i].tab[j]);
			ft_putchar('\n');
			j++;
		}
		i++;
	}
}
