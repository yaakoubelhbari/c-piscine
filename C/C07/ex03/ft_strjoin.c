/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-hbar <yel-hbar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/05 09:42:59 by yel-hbar          #+#    #+#             */
/*   Updated: 2026/08/05 09:43:00 by yel-hbar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	s;

	i = 0;
	s = 0;
	while (dest[i])
	{
		i++;
	}
	while (src[s])
	{
		dest[i] = src[s];
		i++;
		s++;
	}
	dest[i] = '\0';
	return (dest);
}

int	ft_tolalen(int size, char **strs, char *sep)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	while (i < size)
	{
		len = len + ft_strlen(strs[i]);
		i++;
	}
	if (size > 0)
		len = len + (ft_strlen(sep) * (size - 1));
	return (len);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		len;
	char	*result;

	i = 0;
	len = ft_tolalen(size, strs, sep);
	result = malloc(len + 1);
	if (!result)
		return (NULL);
	result[0] = '\0';
	while (i < size)
	{
		ft_strcat(result, strs[i]);
		if (i < size - 1)
			ft_strcat(result, sep);
		i++;
	}
	return (result);
}
