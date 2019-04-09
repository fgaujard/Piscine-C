/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgaujard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/15 14:24:51 by fgaujard          #+#    #+#             */
/*   Updated: 2018/09/18 18:57:16 by fgaujard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_count_word(char *str)
{
	int		i;
	int		word;

	i = 0;
	word = 0;
	while (str[i] != '\0')
	{
		while ((str[i] == '	') || (str[i] == ' ') || (str[i] == '\n'))
			i++;
		if (str[i] != '\0')
			word++;
		while ((str[i] != '	') && (str[i] != ' ') && (str[i] != '\n')\
				&& (str[i] != '\0'))
			i++;
	}
	return (word);
}

char	**ft_count_letter(char *str, char **tab)
{
	int		i;
	int		k;
	int		letter;

	i = 0;
	k = 0;
	letter = 0;
	while (str[k] != '\0' && i < ft_count_word(str))
	{
		while (((str[k] == '	') || (str[k] == ' ') || (str[k] == '\n'))\
					&& (str[k] != '\0'))
			k++;
		while ((str[k] != '	') && (str[k] != ' ') && (str[k] != '\n')\
					&& (str[k] != '\0'))
		{
			k++;
			letter++;
		}
		if (!(tab[i] = (char *)malloc(sizeof(char) * (letter + 1))))
			return (0);
		letter = 0;
		i++;
	}
	return (tab);
}

char	**fill_tab(char *str, char **tab)
{
	int		i;
	int		j;
	int		k;

	i = 0;
	j = 0;
	k = 0;
	while (str[j] != '\0' && i < ft_count_word(str))
	{
		while (((str[j] == '	') || (str[j] == ' ') || (str[j] == '\n'))
				&& (str[j] != '\0'))
			j++;
		while ((str[j] != '	') && (str[j] != ' ') && (str[j] != '\n')\
				&& (str[j] != '\0'))
		{
			tab[i][k] = str[j];
			k++;
			j++;
		}
		tab[i++][k] = '\0';
		k = 0;
	}
	return (tab);
}

char	**ft_split_whitespaces(char *str)
{
	char **tab;

	if (!(tab = (char **)malloc(sizeof(int *) * (ft_count_word(str) + 1))))
		return (0);
	tab[ft_count_word(str)] = 0;
	tab = ft_count_letter(str, tab);
	fill_tab(str, tab);
	return (tab);
}
