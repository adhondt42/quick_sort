#include "../inc/quick_sort.h"


void	sort(int *a, int alen, int ipivot)
{
	int	ileft;
	int	iright;

	ileft = bigger_than_pivot(a, alen, ipivot);
	iright = smaller_than_pivot(a, alen, ipivot);
	if (ileft < 0 || iright < 0)
		return ;
	if (ileft > iright)
	{
		swap_int(&a[ileft], &a[ipivot]);
		pivot_and_sort(a, ileft);
		pivot_and_sort(a + ileft, alen - ileft);
		return ;
	}
	else
		swap_int(&a[ileft], &a[iright]);
	sort(a, alen, ipivot);
}

void	pivot_and_sort(int *a, int alen)
{
	int	middle;
	int	last;

	if (alen == 1)
		return ;
	else if (alen == 2)
	{
		if (a[0] > a[1])
			swap_int(&a[0], &a[1]);
		return ;
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
		if (alen == 3)
			return ;
	}
	swap_int(&(a[middle]), &(a[last])); // take the pivot to last pos.
	sort(a, alen, last);
}

int	main(int argc, char **argv)
{
	int		i;
	int		*a;
	int		alen;

	i = -1;
	a = ft_intnew(argc - 1, 0);
	alen = argc -1;
	while (++i < argc - 1)
		a[i] = ft_atoi(argv[i + 1]);
	pivot_and_sort(a, alen);
	ft_putinttab(a, alen, "\n");
	return (0);
}
