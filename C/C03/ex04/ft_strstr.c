/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-hbar <yel-hbar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/29 20:49:41 by yel-hbar          #+#    #+#             */
/*   Updated: 2026/08/02 17:41:01 by yel-hbar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	f;

	i = 0;
	f = 0;
	if (to_find[0] == '\0')
	{
		return (str);
	}
	while (str[i])
	{
		f = 0;
		while (to_find[f] && (str[i + f] == to_find[f]))
		{
			f++;
		}
		if (to_find[f] == '\0')
		{
			return (&str[i]);
		}
		i++;
	}
	return (0);
}
