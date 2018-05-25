/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   quick_sort.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adhondt <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/25 16:26:22 by adhondt           #+#    #+#             */
/*   Updated: 2018/05/25 17:10:24 by adhondt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef QUICK_SORT_H
# define QUICK_SORT_H
# include <unistd.h>
# include <stdlib.h>

void	pivot_and_sort(int *a, int alen);

int		bigger_than_pivot(int *a, int alen, int ipivot);
int		smaller_than_pivot(int *a, int alen, int ipivot);

void	swap_int(int *a, int *b);
void	ft_putinttab(int *tab, int size, char *sp);
int		ft_atoi(const char *str);
int		*ft_intnew(size_t size, int value);
void	ft_putchar(char c);
void	ft_putstr(char const *s);
size_t	ft_strlen(const char *str);
void	ft_putnbr(int n);
#endif
