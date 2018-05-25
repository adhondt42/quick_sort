#include "libft/libft.h"
//yo
int	choose_pivot(t_pm *s)
{
	int	tmp;

	if (s->a[0] > s->a[(s->alen - 1) / 2])
		swap_int(&(s->a[0]), &(s->a[(s->alen - 1) / 2]));
	if (s->a[(s->alen - 1)/ 2] > s->a[s->alen - 1])
	if (s->a[0] > s->a[(s->alen - 1) / 2])
}

int	main(int argc, char **argv)
{
	int		i;
	int		n;
	t_pm	*s;

	i = -1;
	if (!(s = (t_pm *)malloc(sizeof(t_pm))))
		return (0);
	s->a = ft_intnew(argc - 1, 0);
	s->alen = argc -1;
	while (++i < argc - 1)
		s->a[i] = ft_atoi(argv[i + 1]);
	n = choose_pivot(s);


}
