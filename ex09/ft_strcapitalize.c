/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iung <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 15:24:46 by iung              #+#    #+#             */
/*   Updated: 2022/09/20 19:29:07 by iung             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_alphanum(char c)
{
	if ((c >= 'A' && c <= 'Z')
		|| (c >= 'a' && c <= 'z')
		|| (c >= '0' && c <= '9'))
	{
		return (1);
	}
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (i == 0 || ft_alphanum(str[i -1]) == 0)
			{
				str[i] = str[i] - 32;
			}
		}
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			if (i != 0 && ft_alphanum(str[i - 1]) == 1)
			{
				str[i] = str[i] + 32;
			}
		}
		i++;
	}
	return (str);
}
