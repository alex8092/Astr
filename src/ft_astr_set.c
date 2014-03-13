#include "astr_private.h"

char	*p_astr_set(t_astr *astr, size_t index, char *str)
{
	char	*tmp;

	tmp = NULL;
	if (astr && index < astr->m_size)
	{
		tmp = astr->m_arr[index];
		astr->m_arr[index] = str;
	}
	return (tmp);
}
