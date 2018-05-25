/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put2str.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adhondt <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/16 18:03:11 by adhondt           #+#    #+#             */
/*   Updated: 2018/04/17 15:10:33 by adhondt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_put4str(char *str, char *strb, char *strc, char *strd)
{
	if (!str || !strb || !strc || !strd)
		return ;
	ft_putstr(str);
	ft_putstr(strb);
	ft_putstr(strc);
	ft_putstr(strd);
}
