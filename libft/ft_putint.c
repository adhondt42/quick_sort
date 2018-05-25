/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putint.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adhondt <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/18 15:04:02 by adhondt           #+#    #+#             */
/*   Updated: 2018/04/18 15:04:04 by adhondt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putint(int *name, char *separator)
{
	int	i;

	i = 1;
	while (i < name[0] + 1)
	{
		ft_putstr(ft_itoa(name[i]));
		if (i + 1 < name[0] + 1)
			ft_putstr(separator);
		i++;
	}
}
