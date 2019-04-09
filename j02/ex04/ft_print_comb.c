/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgaujard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/02 11:17:53 by fgaujard          #+#    #+#             */
/*   Updated: 2018/09/03 21:05:32 by fgaujard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print(int c, int d, int u)
{
	ft_putchar(c + '0');
	ft_putchar(d + '0');
	ft_putchar(u + '0');
	if (c < 7)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb(void)
{
	int c;
	int d;
	int u;

	c = 0;
	while (c <= 9)
	{
		d = c + 1;
		while (d <= 9)
		{
			u = d + 1;
			while (u <= 9)
			{
				ft_print(c, d, u);
				u++;
			}
			d++;
		}
		c++;
	}
}
