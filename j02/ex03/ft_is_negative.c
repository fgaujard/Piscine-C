/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgaujard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/31 13:58:58 by fgaujard          #+#    #+#             */
/*   Updated: 2018/09/03 16:52:24 by fgaujard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_is_negative(int i)
{
	if (i < 0)
	{
		ft_putchar('N');
	}
	else
	{
		ft_putchar('P');
	}
}
