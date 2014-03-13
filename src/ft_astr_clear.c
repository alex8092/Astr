#include "astr_private.h"

void	p_astr_clear(t_astr *astr, t_bool del)
{
	size_t	i;

	if (astr)
	{
		i = 0;
		if (del)
		{
			while (i < astr->m_size)
			{
				free(astr->m_arr[i]);
				++i;
			}
		}
		free(astr->m_arr);
		astr->m_arr = 0;
		astr->m_size = 0;
	}
}
