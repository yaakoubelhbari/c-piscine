/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-hbar <yel-hbar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/05 09:17:01 by yel-hbar          #+#    #+#             */
/*   Updated: 2026/08/05 09:32:44 by yel-hbar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	size;
	int	*range;

	i = 0;
	size = max - min;
	if (min >= max)
	{
		return (NULL);
	}
	range = malloc(sizeof(int) * size);
	if (!range)
	{
		return (NULL);
	}
	while (i < size)
	{
		range[i] = min + i;
		i++;
	}
	return (range);
}
