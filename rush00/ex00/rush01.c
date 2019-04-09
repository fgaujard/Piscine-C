/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgaujard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/01 10:28:53 by fgaujard          #+#    #+#             */
/*   Updated: 2018/09/02 22:05:36 by hcasanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
void	ft_negatif(void);

int		first_floor(int x)
{
	int i;

	i = 0;
	if (x == 1)
	{
		ft_putchar('/');
	}
	if (x == 2)
	{
		ft_putchar('/');
		ft_putchar(92);
	}
	if (i < x - 2)
	{
		ft_putchar('/');
		while (i < (x - 2))
		{
			ft_putchar('*');
			i++;
		}
		ft_putchar(92);
	}
	ft_putchar('\n');
	return (0);
}

void	ft_body_largeur(int x, int y)
{
	int i;

	i = 0;
	if (x == 1)
		ft_putchar('*');
	if ((y > 2) && (x > 1))
	{
		ft_putchar('*');
		while (i < (x - 2))
		{
			ft_putchar(' ');
			i++;
		}
		ft_putchar('*');
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
			ft_putchar(92);
		else if (x == 2)
		{
			ft_putchar(92);
			ft_putchar('/');
		}
		else if (x > 2)
		{
			ft_putchar(92);
			count = 0;
			while (count < (x - 2))
			{
				ft_putchar('*');
				count++;
			}
			ft_putchar('/');
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
