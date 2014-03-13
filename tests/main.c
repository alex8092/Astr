#include "astr.h"
#include <stdio.h>

int	main(void)
{
	t_astr	*tab;

	tab = ft_astr_create(2);
	tab->set(tab, 0, "bonjour");
	tab->set(tab, 1, "welcome");
	printf("tab : %s\n", tab->get(tab, 0));
	printf("tab : %s\n", tab->get(tab, 1));
	return (0);
}
