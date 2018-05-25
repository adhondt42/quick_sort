/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcnew.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adhondt <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/15 19:46:24 by adhondt           #+#    #+#             */
/*   Updated: 2018/05/23 16:27:23 by adhondt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strcnew(size_t n, char c)
{
	char	*ret;
	size_t	i;

	i = 0;
	if (!(ret = (char *)malloc(sizeof(char) * (n + 1))))
		return (NULL);
	ret[n] = '\0';
	while (i != n)
		ret[i++] = c;
	return (ret);
}
