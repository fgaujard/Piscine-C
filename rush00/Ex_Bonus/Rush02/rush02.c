/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgaujard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/01 10:28:53 by fgaujard          #+#    #+#             */
/*   Updated: 2018/09/02 22:13:10 by hcasanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
void	ft_negatif(void);

void	first_floor(int x)
{
	int i;

	i = 0;
	if (x == 1)
	{
		ft_putchar('A');
	}
	if (x == 2)
	{
		ft_putchar('A');
		ft_putchar('A');
	}
	if (i < (x - 2))
	{
		ft_putchar('A');
		while (i < (x - 2))
		{
			ft_putchar('B');
			i++;
		}
		ft_putchar('A');
	}
	ft_putchar('\n');
}

void	ft_body_largeur(int x, int y)
{
	int i;

	i = 0;
	if (x == 1)
		ft_putchar('B');
	if ((y > 2) && (x > 1))
	{
		ft_putchar('B');
		while (i < (x - 2))
		{
			ft_putchar(' ');
			i++;
		}
		ft_putchar('B');
	}
	ft_putchar('\n');
}

void	ft_body_hauteur(int x, int y)
{
	int j;

	j = 0;
	while (j < (y - 2))
	{
		ft_body_largeur(x, y);
		j++;
	}
}

void	last_floor(int x, int y)
{
	int count;

	if (y > 1)
	{
		if (x == 1)
			ft_putchar('C');
		else if (x == 2)
		{
			ft_putchar('C');
			ft_putchar('C');
		}
		else if (x > 2)
		{
			ft_putchar('C');
			count = 0;
			while (count < (x - 2))
			{
				ft_putchar('B');
				count++;
			}
			ft_putchar('C');
		}
		ft_putchar('\n');
	}
}

void	rush(int x, int y)
{
	int		i;

	i = 0;
	if ((x < 0) || (y < 0))
	{
		ft_negatif();
	}
	else if ((x < 2147483647) && (y < 2147483647) && (x != 0) && (y != 0))
	{
		first_floor(x);
		ft_body_hauteur(x, y);
		last_floor(x, y);
	}
}
