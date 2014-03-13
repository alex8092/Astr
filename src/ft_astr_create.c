#include "astr_private.h"
#include <ft/common.h>

t_astr	*ft_astr_create(int size)
{
	t_astr	*astr;

	astr = (t_astr*)ft_memalloc(sizeof(t_astr));
	if (astr)
	{
		astr->m_size = size;
		astr->m_arr = (char **)ft_memalloc(sizeof(char *) * size);
		astr->set = p_astr_set;
		astr->get = p_astr_get;
		astr->add = p_astr_add;
		astr->erase = p_astr_erase;
		astr->clear = p_astr_clear;
		astr->joinall = p_astr_joinall;
		astr->sort = p_astr_sort;
		astr->free = p_astr_free;
	}
	return (astr);
}
