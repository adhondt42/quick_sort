/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adhondt <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 15:58:23 by adhondt           #+#    #+#             */
/*   Updated: 2017/11/27 15:42:12 by adhondt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		onlyins(char *s1, char *s2)
{
	int	i;

	if ((*s1 == '\0' || *s2 == '\0') || !(s2))
		return (0);
	while (*s1)
	{
		i = 0;
		while (s2[i])
		{
			if (s2[i] == *s1)
				break ;
			else
				i++;
			if (s2[i] == '\0')
				return (0);
		}
		s1++;
	}
	return (1);
}
