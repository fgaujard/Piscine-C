/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgaujard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/12 09:50:16 by fgaujard          #+#    #+#             */
/*   Updated: 2018/09/13 15:20:23 by fgaujard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowercase(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((64 < str[i]) && (str[i] < 91))
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int i;

	i = 0;
	ft_strlowercase(str);
	while (str[i] != '\0')
	{
		if (str[i] == str[0])
			if ((96 < str[i]) && (str[i] < 123))
				str[i] = str[i] - 32;
		while (str[i] == ' ' || str[i] == '+' || str[i] == '-')
		{
			i++;
			if ((96 < str[i]) && (str[i] < 123))
				str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}
