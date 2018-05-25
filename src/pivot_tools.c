/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adhondt <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/25 13:44:23 by adhondt           #+#    #+#             */
/*   Updated: 2018/05/25 17:08:36 by adhondt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/quick_sort.h"

int		bigger_than_pivot(int *a, int alen, int ipivot)
{
	int	i;

	i = 0;
	while (a[i] <= a[ipivot] && i < alen)
		i++;
	return (i);
}


int		smaller_than_pivot(int *a, int alen, int ipivot)
{
	int	i;

	i = alen - 1;
	while (a[i] >= a[ipivot] && i >= 0)
		i--;
	return (i);
}
