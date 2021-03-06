/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgaujard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/07 11:17:06 by fgaujard          #+#    #+#             */
/*   Updated: 2018/09/08 20:23:05 by fgaujard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	int n;

	n = 1;
	while (n * n < nb)
		n++;
	if (n * n == nb)
		return (n);
	if (nb == 1)
		return (1);
	else
		return (0);
}
