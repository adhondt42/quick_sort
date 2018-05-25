/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_c.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adhondt <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/17 15:01:42 by adhondt           #+#    #+#             */
/*   Updated: 2018/04/18 15:04:19 by adhondt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			ft_putstr_c(char *str, char *color)
{
	int			i;
	static char	*colors[9] = {"black", "red", "green", "yellow", "blue", "lred",
		"lblue", "lgreen", "lcyan"};
	static char	*code[9] = {"30m", "31m", "32m", "33m", "34m", "91m", "94m",
		"92m", "96m"};

	i = 0;
	while (i < 7 && ft_strcmp(colors[i], color) != 0)
		i++;
	ft_put4str("\033[", code[i], str, "\033[39m");
}
