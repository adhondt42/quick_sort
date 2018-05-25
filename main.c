#include "libft/libft.h"

void	pivot_and_sort(int *a, int alen)
{
	int	tmp;
	int	middle;
	int	last;

	if (alen == 1)
		return ;
	else if (alen == 2)
	{
		if (a[0] > a[1])
			swap_int(&a[0], &a[1]);
	}
	else
	{
		middle = (alen) / 2;
		last = alen -1;
		if (a[0] > a[middle])
			swap_int(&(a[0]), &(a[middle]));
		if(a[middle] > a[last])
			swap_int(&(a[last]), &(a[middle]));
		if (a[0] > a[middle])
			swap_int(& (a[0]), &(a[middle]));
	}
	if (alen <= 3)
		return ;
	else
		swap_int(&(a[middle]), &(a[last]));
	sort(a, alen, last);
}

int	sort(int *a, int alen, int ipivot)
{
	int	ileft;
	int	iright;

	ileft = bigger_than_pivot(a, alen, ipivot);
	iright = smaller_than_pivot(a, alen, ipivot);
	if (ileft > iright)
	{
		swap_int(&a[ileft], &a[ipivot]);
		pivot_and_sort(a, ileft);
		pivot_and_sort(a + ileft, alen - ileft);
		return (0);
	}
	else
		swap_int(&a[ileft], &a[iright]);
	sort(a, alen, ipivot);
	return (1);
}

int	main(int argc, char **argv)
{
	int		i;
	int		n;
	int		*a;
	int		alen;

	i = -1;
	a = ft_intnew(argc - 1, 0);
	alen = argc -1;
	while (++i < argc - 1)
		a[i] = ft_atoi(argv[i + 1]);
	pivot_and_sort(a, alen);
	ft_putinttab(a, alen, "\n");
}
