/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iung <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 09:24:45 by iung              #+#    #+#             */
/*   Updated: 2022/09/24 15:24:39 by iung             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	l;

	l = 0;
	i = 0;
	while (src[l])
		l++;
	if (size == 0)
		return (l);
	while (src[i] != '\0' && i < size - 1)
	{	
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (l);
}
