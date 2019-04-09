/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgaujard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/06 16:26:49 by fgaujard          #+#    #+#             */
/*   Updated: 2018/09/10 14:37:46 by fgaujard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int i;
	int count;

	i = nb;
	count = 1;
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	else
		while (count < power)
		{
			i = i * nb;
			count++;
		}
	return (i);
}
