/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-hbar <yel-hbar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/19 21:05:38 by yel-hbar          #+#    #+#             */
/*   Updated: 2026/08/02 17:42:22 by yel-hbar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

void	ft_rev_int_tab(int *tab, int size)
{
	int	start;
	int	end ;

	start = 0;
	end = size - 1;
	while (start < end)
	{
		ft_swap(&tab[start], &tab[end]);
		start++;
		end--;
	}
}
