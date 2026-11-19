/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-hbar <yel-hbar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/29 20:48:24 by yel-hbar          #+#    #+#             */
/*   Updated: 2026/08/02 17:35:59 by yel-hbar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int				i;
	unsigned int	s;

	i = 0;
	s = 0;
	while (dest[i])
	{
		i++;
	}
	while (src[s] && s < nb)
	{
		dest[i] = src[s];
		i++;
		s++;
	}	
	dest[i] = '\0';
	return (dest);
}
