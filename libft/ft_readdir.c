/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_readdir.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adhondt <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/18 11:39:05 by adhondt           #+#    #+#             */
/*   Updated: 2018/04/19 18:54:30 by jtaibi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char				**ft_readdir(char *path, int a)
{
	int				i;
	struct dirent	*dirent;
	DIR				*dir;
	char			**files;

	i = 0;
	if (!(dir = opendir(path)))
	{
		ft_put4str(path, " : Error ft_readdir :", strerror(errno), "\n");
		return (NULL);
	}
	if (!(files = (char **)malloc(sizeof(char *) * (dirlen(path, a) + 1))))
		return (NULL);
	while (dir && (dirent = readdir(dir)))
	{
		if (!a && dirent->d_name[0] == '.')
			;
		else
			files[i++] = ft_strdup(dirent->d_name);
	}
	files[i] = NULL;
	closedir(dir);
	return (files);
}
