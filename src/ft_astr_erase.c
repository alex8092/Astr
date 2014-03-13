#include "astr_private.h"

char	*p_astr_erase(t_astr *astr, size_t index)
{
	char	**new;
	char	*str;
	size_t	j;
	size_t	k;

	if (astr && index < astr->m_size && !(j = 0) && !(k = 0))
	{
		new = (char **)malloc(sizeof(char *) * (astr->m_size - 1));
		while (j < astr->m_size)
		{
			if (j != index)
			{
				new[k] = astr->m_arr[j];
				++k;
			}
			else
				str = astr->m_arr[j];
			++j;
		}
		free(astr->m_arr);
		astr->m_arr = new;
		--astr->m_size;
		return (str);
	}
	return (NULL);
}
