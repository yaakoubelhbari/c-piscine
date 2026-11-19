/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-hbar <yel-hbar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/01 14:44:30 by yel-hbar          #+#    #+#             */
/*   Updated: 2026/08/03 14:56:35 by yel-hbar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	rev_params(int ac, char **av)
{
	int	i;
	int	j;

	i = 0;
	j = ac - 1;
	while (j > 0)
	{
		i = 0;
		while (av[j][i] != 0)
		{
			write(1, &av[j][i], 1);
			i++;
		}
		write(1, "\n", 1);
		j--;
	}
}

int	main(int ac, char **av)
{
	if (ac > 1)
	{
		rev_params(ac, av);
		return (0);
	}
	return (0);
}
