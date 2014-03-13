#ifndef FT_ASTR_PRIVATE_H
# define FT_ASTR_PRIVATE_H

# include "astr.h"
# include <stdlib.h>

char	*p_astr_set(t_astr *astr, size_t i, char *str);
char	*p_astr_get(t_astr *astr, size_t i);
t_bool	p_astr_add(t_astr *astr, char *str);
char	*p_astr_erase(t_astr *astr, size_t i);
void	p_astr_clear(t_astr *astr, t_bool del);
char	*p_astr_joinall(t_astr *astr);
t_astr	*p_astr_sort(t_astr *astr, t_bool (*f)(char *, char *));
void	p_astr_free(t_astr **pastr, t_bool del);

#endif
