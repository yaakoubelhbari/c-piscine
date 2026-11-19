/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-hbar <yel-hbar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/30 17:13:04 by yel-hbar          #+#    #+#             */
/*   Updated: 2026/08/01 10:26:16 by yel-hbar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

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

int	is_duplicated(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i])
	{
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int	is_valid(char *base)
{
	int	i;
	int	len;

	i = 0;
	len = ft_strlen(base);
	if (len < 2)
		return (0);
	while (base[i])
	{
		if (((base[i] >= 9 && base[i] <= 13) || base[i] == 32))
			return (0);
		if (base[i] == '+' || base[i] == '-')
			return (0);
		if (is_duplicated(base))
			return (0);
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		len;

	len = ft_strlen(base);
	if (!is_valid(base))
		return ;
	if (nbr == -2147483648)
	{
		write(1, "-", 1);
		ft_putnbr_base(-(nbr / len), base);
		write(1, &base[-(nbr % len)], 1);
		return ;
	}
	if (nbr < 0)
	{
		write(1, "-", 1);
		nbr = -nbr;
	}
	if (nbr >= len)
	{
		ft_putnbr_base(nbr / len, base);
	}
	write(1, &base[nbr % len], 1);
}
