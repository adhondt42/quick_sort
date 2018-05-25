/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adhondt <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/25 13:44:23 by adhondt           #+#    #+#             */
/*   Updated: 2018/05/25 16:08:40 by adhondt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"

int		bigger_than_pivot(int *a, int alen, int pivot)
{
	int	i;

	i = 0;
	while (a[i] <= a[pivot])
		i++;
	return (i);
}


int		smaller_than_pivot(int *a, int alen, int pivot)
{
	int	i;

	i = alen - 1;
	while (a[i] >= a[pivot])
		i--;
	return (i);

}

void	swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}



