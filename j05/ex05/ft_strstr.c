/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgaujard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/12 18:02:24 by fgaujard          #+#    #+#             */
/*   Updated: 2018/09/13 11:42:54 by fgaujard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strstr(char *str, char *to_find)
{
	int len_str;
	int len_to_find;
	int i;
	int j;

	i = 0;
	len_str = ft_strlen(str);
	len_to_find = ft_strlen(to_find);
	while (i < (len_str - len_to_find + 1))
	{
		j = 0;
		while (j < len_to_find)
		{
			if (str[i + j] != to_find[j])
				break ;
			j++;
		}
		if (j == len_to_find)
			return (str + i);
		i++;
	}
	return (0);
}
