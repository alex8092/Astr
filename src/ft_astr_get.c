#include "astr_private.h"

char	*p_astr_get(t_astr *astr, size_t index)
{
	if (astr && index < astr->m_size)
		return (astr->m_arr[index]);
	return (NULL);
}
