/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dirlen.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adhondt <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/18 11:50:44 by adhondt           #+#    #+#             */
/*   Updated: 2018/04/18 15:03:18 by adhondt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int					dirlen(char *path, int a)
{
	struct dirent	*dirent;
	DIR				*dir;
	int				dirlen;

	dirlen = 0;
	if (!(dir = opendir(path)))
	{
		ft_put4str(path, " : Error dirlen :", strerror(errno), "\n");
		return (0);
	}
	while ((dirent = readdir(dir)))
	{
		if (a == 0 && dirent->d_name[0] == '.')
			;
		else
			dirlen++;
	}
	free(dirent);
	closedir(dir);
	return (dirlen);
}
