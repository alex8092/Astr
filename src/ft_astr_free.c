#include "astr_private.h"

void	p_astr_free(t_astr **pastr, t_bool del)
{
	if (pastr && *pastr)
	{
		(*pastr)->clear(*pastr, del);
		free(*pastr);
		*pastr = 0;
	}
}
