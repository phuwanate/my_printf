#include "ft_printf.h"

void	ft_putchr(char c, int *len_str)
{
	(*len_str) += write (1, &c, 1);
}

void	ft_putstr(char *s, int *len_str)
{
	int		i;

	i = 0;
	if (s == NULL)
	{
		(*len_str) += write(1, "(null)", 6);
		return ;
	}
	while (s[i] != '\0')
	{
		(*len_str) += write(1, &s[i], 1);
		i++;
	}
}
