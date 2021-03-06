/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgaujard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/08 13:40:15 by fgaujard          #+#    #+#             */
/*   Updated: 2018/09/08 17:24:22 by fgaujard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char *str)
{
	int i;
	int j;
	int neg;

	i = 0;
	j = 0;
	while (str[j] == ' ' || str[j] == '\t' || str[j] == '\n' || str[j] == '\r')
		j++;
	while (str[j] == '\v' || str[j] == '\f')
		j++;
	neg = 1;
	if (str[j] == '+' || str[j] == '-')
	{
		if (str[j] == '-')
			neg = -1;
		j++;
	}
	while (str[j] >= '0' && str[j] <= '9')
	{
		i = ((i * 10) + (str[j] - '0'));
		j++;
	}
	return (i * neg);
}
