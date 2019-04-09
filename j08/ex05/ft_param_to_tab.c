/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_param_to_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgaujard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/20 11:38:34 by fgaujard          #+#    #+#             */
/*   Updated: 2018/09/20 18:42:29 by fgaujard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_par.h"

int					ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
		i++;
	i++;
	return (i);
}

char				*ft_strdup(char *src)
{
	int		i;
	int		size;
	char	*dest;

	i = 0;
	size = ft_strlen(src);
	if (!(dest = (char *)malloc(sizeof(char) * size)))
		return (0);
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

struct	s_stock_par	*ft_param_to_tab(int ac, char **av)
{
	int				i;
	t_stock_par		*param;

	i = 0;
	if (!(param = (t_stock_par *)malloc(sizeof(t_stock_par) * (ac + 1))))
		return (0);
	while (i < ac)
	{
		param[i].size_param = ft_strlen(av[i]);
		param[i].str = av[i];
		param[i].copy = ft_strdup(av[i]);
		param[i].tab = ft_split_whitespaces(av[i]);
		i++;
	}
	param[i].str = 0;
	return (0);
}
