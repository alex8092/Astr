#ifndef FT_ASTR_H
# define FT_ASTR_H

# include <unistd.h>
# include <ft/common.h>

typedef struct s_astr	t_astr;

struct	s_astr
{
	char	**m_arr;
	size_t	m_size;
	
	char	*(*set)(t_astr *, size_t, char *);
	char	*(*get)(t_astr *, size_t);
	t_bool	(*add)(t_astr *, char *);
	char	*(*erase)(t_astr *, size_t);
	void	(*clear)(t_astr *, t_bool);
	char	*(*joinall)(t_astr *);
	t_astr	*(*sort)(t_astr *, t_bool (*)(char *, char *));
	void	(*free)(t_astr **, t_bool);
};

t_astr	*ft_astr_create(int size);

#endif
