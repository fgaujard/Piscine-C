/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgaujard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/15 12:08:03 by fgaujard          #+#    #+#             */
/*   Updated: 2018/09/18 10:55:44 by fgaujard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(int argc, char **argv)
{
	int		i;
	int		j;

	i = 1;
	j = 0;
	while (i < argc)
	{
		while (argv[i][j] != '\0')
			j++;
		i++;
	}
	return (j);
}

char	*ft_cp_to_dest(int argc, char **argv, char *dest)
{
	int		i;
	int		j;
	int		k;

	i = 1;
	k = 0;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			dest[k] = argv[i][j];
			k++;
			j++;
		}
		if (i < (argc - 1))
		{
			dest[k] = '\n';
			k++;
		}
		i++;
	}
	dest[k] = '\0';
	return (dest);
}

char	*ft_concat_params(int argc, char **argv)
{
	int		size;
	char	*dest;

	size = ft_strlen(argc, argv);
	if (!(dest = (char *)malloc(sizeof(char) * size)))
		return (0);
	ft_cp_to_dest(argc, argv, dest);
	return (dest);
}
