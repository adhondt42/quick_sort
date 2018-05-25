/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   addtotab.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adhondt <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/12 10:35:01 by adhondt           #+#    #+#             */
/*   Updated: 2018/04/18 13:16:21 by adhondt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		**addtotab_f(char **tab, char *str, size_t i)
{
	int		tabsize;
	char	**ret;

	tabsize = tablen(tab);
	if ((ret = (char **)malloc(sizeof(char *) * (tabsize + 2))) == NULL)
		return (NULL);
	ret[tabsize + 1] = NULL;
	ret[tabsize] = ft_strdup(str);
	while (--tabsize >= 0)
		ret[tabsize] = ft_strdup(tab[tabsize]);
	if (i == 1 || i == 3)
		ft_freetab(tab);
	if (i == 2 || i == 3)
		free(str);
	return (ret);
}
