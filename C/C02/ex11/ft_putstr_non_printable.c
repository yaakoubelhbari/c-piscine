/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-hbar <yel-hbar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/25 17:03:33 by yel-hbar          #+#    #+#             */
/*   Updated: 2026/08/02 17:38:21 by yel-hbar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	nibble_to_char(int n)
{
	if (n < 10)
	{
		return (n + '0');
	}
	else
	{
		return ((n - 10) + 'a');
	}
}

void	ft_putstr_non_printable(char *str)
{
	int				i;
	unsigned char	c;
	char			hight;
	char			low;

	i = 0;
	while (str[i])
	{
		c = (unsigned char)str[i];
		if ((c < 32 || c > 126))
		{
			hight = nibble_to_char(c / 16);
			low = nibble_to_char(c % 16);
			write(1, "\\", 1);
			write(1, &hight, 1);
			write(1, &low, 1);
		}
		else
		{
			write(1, &str[i], 1);
		}
		i++;
	}
}
