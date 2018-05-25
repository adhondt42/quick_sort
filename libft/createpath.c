/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   createpath.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adhondt <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/17 17:16:14 by adhondt           #+#    #+#             */
/*   Updated: 2018/04/17 17:17:11 by adhondt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*createpath(char *path, char *name)
{
	char	*ret;

	if (!(path))
		return (ft_strdup(name));
	ret = ft_strjoin(path, "/");
	ret = ft_strjoin_f(ret, name, 1);
	return (ret);
}
