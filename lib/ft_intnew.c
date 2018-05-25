/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_intnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adhondt <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/18 15:03:39 by adhondt           #+#    #+#             */
/*   Updated: 2018/05/25 16:50:09 by adhondt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/quick_sort.h"

int		*ft_intnew(size_t size, int value)
{
	size_t	i;
	int		*new;

	if ((new = (int *)malloc(sizeof(int) * size + 1)) == NULL)
		return (NULL);
	i = 0;
	while (i < size)
	{
		new[i] = value;
		i++;
	}
	return (new);
}
