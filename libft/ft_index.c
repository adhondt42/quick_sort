/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_index.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adhondt <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/16 17:28:53 by adhondt           #+#    #+#             */
/*   Updated: 2018/04/16 17:28:58 by adhondt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_index(const char *str, char c)
{
	int		index;

	index = 0;
	while (str[index] && str[index] != c)
		index++;
	if (!str[index])
		index = -1;
	return (index);
}
