/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-hbar <yel-hbar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/01 14:37:05 by yel-hbar          #+#    #+#             */
/*   Updated: 2026/08/03 14:56:28 by yel-hbar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_params(int ac, char **av)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	while (j < ac)
	{
		i = 0;
		while (av[j][i] != 0)
		{
			write(1, &av[j][i], 1);
			i++;
		}
		write(1, "\n", 1);
		j++;
	}
}

int	main(int ac, char **av)
{
	if (ac > 1)
	{
		print_params(ac, av);
		return (0);
	}
	return (0);
}
